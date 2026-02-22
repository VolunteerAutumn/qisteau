#include <iostream>
#include <windows.h>
#pragma comment(lib, "winmm.lib")
using namespace std;

// anemal
class Animal
{
protected:
	string species;
	int weight;
	int speed;
	string habitat;
public:
	Animal() : species("unknown"), weight(0), speed(0), habitat("unknown") {}
	Animal(string s, int w, int sp, string h) : species(s), weight(w), speed(sp), habitat(h) {}
	virtual void Move()
	{
		cout << "The " << species << " began to move at a speed of " << speed << " km/h." << endl;
	}
	virtual void Show()
	{
		cout << "Species: " << species << endl;
		cout << "Weight: " << weight << " kg" << endl;
		cout << "Speed: " << speed << " km/h" << endl;
		cout << "Habitat: " << habitat << endl;
	}
	virtual void Voice()
	{
		PlaySound(TEXT("sound.wav"), NULL, SND_FILENAME | SND_SYNC);
	}
	virtual ~Animal() {}
};

// byrd
class Bird : public Animal
{
protected:
	int wingSpan;
public:
	Bird() : Animal(), wingSpan(0) {}
	Bird(string s, int w, int sp, string h, int ws) : Animal(s, w, sp, h), wingSpan(ws) {}
	void Move() override
	{
		cout << "The " << species << " is flying with a wingspan of " << wingSpan << " cm." << endl;
	}
	void Show() override
	{
		Animal::Show();
		cout << "Wing Span: " << wingSpan << " cm" << endl;
	}
	void Voice() override
	{
		PlaySound(TEXT("birdyy.wav"), NULL, SND_FILENAME | SND_SYNC);
	}
};

// feesh
class Fish : public Animal
{
protected:
	int waterDepth;
public:
	Fish() : Animal(), waterDepth(0) {}
	Fish(string s, int w, int sp, string h, int wd) : Animal(s, w, sp, h), waterDepth(wd) {}
	void Move() override
	{
		cout << "The " << species << " is swimming at a depth of " << waterDepth << " meters." << endl;
	}
	void Show() override
	{
		Animal::Show();
		cout << "Water Depth: " << waterDepth << " meters" << endl;
	}
	void Voice() override
	{
		PlaySound(TEXT("bubbels.wav"), NULL, SND_FILENAME | SND_SYNC);
	}
};

// obama
class Reptile : public Animal
{
protected:
	bool isVenomous;
public:
	Reptile() : Animal(), isVenomous(false) {}
	Reptile(string s, int w, int sp, string h, bool iv) : Animal(s, w, sp, h), isVenomous(iv) {}
	void Move() override
	{
		cout << "The " << species << " is crawling at a speed of " << speed << " km/h." << endl;
	}
	void Show() override
	{
		Animal::Show();
		cout << "Is Venomous: " << (isVenomous ? "Yes" : "No") << endl;
	}
	void Voice() override
	{
		PlaySound(TEXT("geckoo.wav"), NULL, SND_FILENAME | SND_SYNC);
	}
};

// final 3 classes
// igul
class Eagle : public Bird
{
	public:
	Eagle() : Bird() {}
	Eagle(string s, int w, int sp, string h, int ws) : Bird(s, w, sp, h, ws) {}
	void Move() override
	{
		cout << "The " << species << " is soaring high in the sky with a wingspan of " << wingSpan << " cm." << endl;
	}
	void Voice() override
	{
		cout << "You hear a piercing scream echo through the mountains." << endl;
		PlaySound(TEXT("eagle.wav"), NULL, SND_FILENAME | SND_SYNC);
	}
};

// SHAQ
class Shark : public Fish
{
	public:
	Shark() : Fish() {}
	Shark(string s, int w, int sp, string h, int wd) : Fish(s, w, sp, h, wd) {}
	void Move() override
	{
		cout << "The " << species << " is swimming swiftly at a depth of " << waterDepth << " meters." << endl;
	}
	void Voice() override
	{
		cout << "A low growl resonates through the waters of the ocean as LE SHARK approaches." << endl;
		PlaySound(TEXT("shark.wav"), NULL, SND_FILENAME | SND_SYNC);
	}
};

// sneik
class Snake : public Reptile
{
	public:
	Snake() : Reptile() {}
	Snake(string s, int w, int sp, string h, bool iv) : Reptile(s, w, sp, h, iv) {}
	void Move() override
	{
		cout << "The " << species << " is slithering at a speed of " << speed << " km/h." << endl;
	}
	void Voice() override
	{
		cout << "A hissing sound fills the air as the snake slithers swiftly through the forest." << endl;
		PlaySound(TEXT("snake.wav"), NULL, SND_FILENAME | SND_SYNC);
	}
};

// =============================== MAIN ===============================
int main()
{
	Animal* zoo[3];

	zoo[0] = new Eagle("Eagle", 5, 160, "Mountains", 220);
	zoo[1] = new Shark("Shark", 500, 50, "Ocean", 200);
	zoo[2] = new Snake("Snake", 2, 20, "Forest", true);

	for (int i = 0; i < 3; i++)
	{
		zoo[i]->Move();
		zoo[i]->Voice();
		zoo[i]->Show();
		cout << endl;
	}

	for (int i = 0; i < 3; i++)
		delete zoo[i];
}
// ososososoososososoososoososososoosoos
// ososososoososososoososoososososoosoos
// ososososoososososoososoososososoosoos
// ososososoososososoososoososososoosoos
// ososososoososososoososoososososoosoos
// ososososoososososoososoososososoosoos
// ososososoososososoososoososososoosoos
// ososososoososososoososoososososoosoos
// ososososoososososoososoososososoosoos
// ososososoososososoososoososososoosoos
// 208
// ososososoososososoososoososososoosoos
// ososososoososososoososoososososoosoos
// ososososoososososoososoososososoosoos
// ososososoososososoososoososososoosoos
// I was bored so (os lol) I killed TWO HOURS writing this sheet (u know what I mean by typing ee)
