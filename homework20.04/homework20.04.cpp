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


}

