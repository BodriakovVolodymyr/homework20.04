#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include "Computer.h"


int main()
{
 vector<Computer> computers;

 computers.push_back(Computer("Asus", 3, 16, true, 1500));
 computers.push_back(Computer("MSI", 4, 32, false, 1850));
 computers.push_back(Computer("Lenovo", 2, 8, true, 1200));

 for (int i = 0; i < computers.size(); i++)
 {
	 computers[i].showInfo();
 }
 cout << "~~~~~~~~~~~~~~~~Find and delete computer by name~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
 //Task1~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 string name = "Asus";

 auto find = find_if(computers.begin(), computers.end(), [name]( Computer a) { return a.getName() == name;});
 if(find == computers.end())
	 {
	 cout << "Computer not found!" << endl;
 }
 else
 {
	 cout << "Computer found!" << endl;
	 find->showInfo();
 }
 cout << "~~~~~~~~~~~~~~~~~Find computer with the lowest rate~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
 //Task2~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 auto it = min_element(computers.begin(), computers.end(), [](Computer& a, Computer& b) { return a.getRate() < b.getRate(); });
 if (it != computers.end())
 {
	 cout << "Computer with the lowest rate: " << endl;
	 it->showInfo();
	 computers.erase(it);
 }
 else
 {
	 cout << "No computers found!" << endl;
 }
 cout << "~~~~~~~~~~~~~~~Updated list of computers~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
 for (int i = 0; i < computers.size(); i++)
 {
	 computers[i].showInfo();
 }

 //Task3~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

 auto dvd = count_if(computers.begin(), computers.end(), [](Computer& a) { return a.getDvdRom(); });
 if(dvd == 0)
 {
	 cout << "No computers with dvd-rom found!" << endl;
 }
 else
 {
	 cout << "Computer with dvd-rom: " << dvd << endl;
 }
 cout << "~~~~~~~~~~~~~Find computer with RAM greater than 16 and update price~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

 
  //Task4~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

 for_each(computers.begin(), computers.end(), [](Computer& a) { if (a.getRam() > 16) { a.setPrice(a.getPrice() * 1.8);}});
 
 for (int i = 0; i < computers.size(); i++)
 {
	 computers[i].showInfo();
 }
 cout << "~~~~~~~~~~~~~Sort computers by price~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

 //Task5~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 sort(computers.begin(), computers.end(), [](Computer& a, Computer& b) { return a.getPrice() < b.getPrice();  });
 cout << "Computers sorted by price from lower to highest: " << endl;
 for (int i = 0; i < computers.size(); i++)
 {
	 computers[i].showInfo();
 }
 cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
 sort(computers.begin(), computers.end(), [](Computer& a, Computer& b) { return a.getPrice() > b.getPrice();  });
 cout << "Computers sorted by price from highest to lower: " << endl;
 for (int i = 0; i < computers.size(); i++)
 {
	 computers[i].showInfo();
 }



}

