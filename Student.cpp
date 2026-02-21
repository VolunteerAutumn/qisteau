#include <iostream>
using namespace std;

struct date
{
	int month;
	int day;
	int year;
	date() : month(0), day(0), year(0) {}
	date(int m, int d, int y) : month(m), day(d), year(y) {}
};

class Student
{
private:
	string name;
	date birthdate;
	int age;
	int year;
	int avgGrade;
public:
	Student() : name(""), age(0), year(0), avgGrade(0) {}
	Student(const string& n, date b, int a, int y, int g) : name(n), birthdate(b), age(a), year(y), avgGrade(g) {}
	void printInfo()
	{
		cout << "Name: " << name << endl;
		cout << "Birthdate: " << birthdate.month << "/" << birthdate.day << "/" << birthdate.year << endl;
		cout << "Age: " << age << endl;
		cout << "Year: " << year << endl;
		cout << "Average Grade: " << avgGrade << endl;
	}
};

class Aspirant : public Student
{
private:
	string topicOfResearch;
	int pageAmount;
public:
	Aspirant() : topicOfResearch(""), Student() {}
	Aspirant(string n, date b, int a, int y, int g, string t, int pa) : Student(n, b, a, y, g), topicOfResearch(t), pageAmount(pa) {}
	void printInfo()
	{
		Student::printInfo();
		cout << "Topic of Research: " << topicOfResearch << endl;
		cout << "They had printed " << pageAmount << " pages." << endl;
	}
	void AddPages(int am)
	{
		this->pageAmount += am;
	}
};

int main()
{
	date d1(1, 15, 2000);
	Student s1("John Doe", d1, 24, 3, 85);

	date d2(5, 20, 1995);
	Aspirant a1("Jane Smith", d2, 29, 5, 90, "Game Development Evolution", 208);

	s1.printInfo();
	cout << endl;
	a1.printInfo();
	a1.AddPages(10);
	a1.printInfo();
}
