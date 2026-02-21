#include <iostream>
using namespace std;

struct Person
{
	string name;
	string surname;
	int age;
};

struct date
	{
	int day;
	int month;
	int year;
	date(int d, int m, int y) : day(d), month(m), year(y) {}
};

struct Visa
{
	string countryOfIssue;
	string visaNumber;
	date dateOfIssue;
	date dateOfExpiry;
	Visa(string coi, string vn, date doi, date doe) : countryOfIssue(coi), visaNumber(vn), dateOfIssue(doi), dateOfExpiry(doe) {}
};

class Passport
{
private:
	Person person;
	date dateOfBirth;
	string IdentificationNumber;
	string passportNumber; 
public:
	Passport(Person p, date dob, string id, string pn) : person(p), dateOfBirth(dob), IdentificationNumber(id), passportNumber(pn) {}
	void displayInfo() {
		cout << "Name: " << person.name << " " << person.surname << endl;
		cout << "Age: " << person.age << endl;
		cout << "Date of Birth: " << dateOfBirth.day << "/" << dateOfBirth.month << "/" << dateOfBirth.year << endl;
		cout << "Identification Number: " << IdentificationNumber << endl;
		cout << "Passport Number: " << passportNumber << endl;
	}
};

class ForeignPassport : public Passport
{
private:
	string countryOfIssue;
	Visa visaDetails;
public:
	ForeignPassport(Person p, date dob, string id, string pn, string coi, Visa v) : Passport(p, dob, id, pn), countryOfIssue(coi), visaDetails(v) {}
	void displayInfo() {
		Passport::displayInfo();
		cout << "Country of Issue: " << countryOfIssue << endl;
	}
};

int main()
{
	Person person1 = { "John", "Doe", 30 };
	date dob1(15, 5, 1990);
	Passport passport1(person1, dob1, "15051990-01198", "82764769");
	Visa visa1("Norway", "VISA20818", date(1, 1, 2020), date(1, 1, 2025));
	ForeignPassport foreignPassport1(person1, dob1, "15051990-01198", "87772727", "Norway", visa1);
	passport1.displayInfo();
	cout << endl;
	foreignPassport1.displayInfo();
}
