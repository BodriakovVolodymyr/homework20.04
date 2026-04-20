#pragma once
#include <iostream>
#include <cstring>
using namespace std;

class Computer
{
	char* name;
	int rate;
	int ram;
	bool dvd_rom;
	int price;

public:
	//Computer();
	Computer(const char* _name, int _rate, int _ram, bool _dvd_rom, int _price);
	Computer(const Computer& obj);
	Computer& operator=(const Computer& obj);
	~Computer();

	void setName(const char* _name);
	void setRate(int _rate);
	void setRam(int _ram);
	void setDvdRom(bool _dvd_rom);
	void setPrice(int _price);

	const char* getName() const;
	int getRate() const;
	int getRam() const;
	bool getDvdRom() const;
	int getPrice() const;

	void showInfo() const;
};

