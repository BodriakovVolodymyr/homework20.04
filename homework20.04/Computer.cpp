#define _CRT_SECURE_NO_WARNINGS
#include "Computer.h"

//Computer::Computer()
//{
//    name = new char[] {"no info"}
//}

Computer::Computer(const char* _name, int _rate, int _ram, bool _dvd_rom, int _price)
{
	int name_length = strlen(_name) + 1;
    name = new char[name_length];
	strcpy(name, _name);

    rate = _rate;
    ram = _ram;
    dvd_rom = _dvd_rom;
	price = _price;
}

Computer::Computer(const Computer& obj)
{
	int name_length = strlen(obj.name) + 1;
    name = new char[name_length];
	strcpy(name, obj.name);

    rate = obj.rate;
    ram = obj.ram;
    dvd_rom = obj.dvd_rom;
	price = obj.price;
}

Computer& Computer::operator=(const Computer& obj)
{
    int name_length = strlen(obj.name) + 1;
    name = new char[name_length];
    strcpy(name, obj.name);

    rate = obj.rate;
    ram = obj.ram;
    dvd_rom = obj.dvd_rom;
    price = obj.price;
	return *this;
}

Computer::~Computer()
{
    delete[] name;
}

void Computer::setName(const char* _name)
{
    if (strlen(_name) < 2) cout << "Invalid name!";
    else {
        int name_length = strlen(name) + 1;
        this->name = new char[name_length];
        strcpy(this->name, name);
    }
}

void Computer::setRate(int _rate)
{
    if (_rate > 0)
    {
        rate = _rate;
    }
	else
    { 
        cout << "Invalid rate quantyty!";
    }
}

void Computer::setRam(int _ram)
{
    if (_ram > 0)
    {
        rate = _ram;
    }
    else
    {
        cout << "Invalid ram quantyty!";
    }
}

void Computer::setDvdRom(bool _dvd_rom)
{
	dvd_rom = _dvd_rom;
}


void Computer::setPrice(int _price)
{
    if (_price > 0)
    {
        rate = _price;
    }
    else
    {
        cout << "Invalid price!";
    }
}

const char* Computer::getName() const
{
    return name;
}

int Computer::getRate() const
{
    return rate;
}

int Computer::getRam() const
{
    return ram;
}

bool Computer::getDvdRom() const
{
    return dvd_rom;
}

int Computer::getPrice() const
{
    return price;
}

void Computer::showInfo() const
{
	cout << "--------------------" << endl;
    cout << "Name: " << name << endl;
    cout << "Rate: " << rate << endl;
    cout << "RAM: " << ram << endl;
    cout << "DVD-ROM: " << (dvd_rom ? "Yes" : "No") << endl;
    cout << "Price: " << price << endl;
    cout << "--------------------" << endl;
}
