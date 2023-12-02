#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;
#include "Models.h"
#include "Encapsulation.h"
#include "Func.h"

int main()
{
    
	Applier* cv1 = new Applier("Sebine", 17, "Designer", "Empty1");
	Applier* cv2 = new Applier("Orkhan", 16, "Salam", "Empty2");
	Applier* cv3 = new Applier("Ibrahim", 16, "Sagol", "Empty3");

	Company company;
	company.hireUp(cv1);
	company.hireUp(cv2);
	company.hireUp(cv3);

	company.writeToFile("company.txt");

	company.readToFile("company.txt");
	company.showAllCV();

	return 0;

}

