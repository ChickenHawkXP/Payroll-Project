#include <iostream>
#include <vector>
#include <string>
#include <fstream>
/*
Functionality:
 1) Add Employee
 2) Modify Employee
 3) Delete Employee
 4) Print Employee Salary Slip
 5) Display an Employee Record
 6) List of Employees

 Project Source Idea: https://www.codewithc.com/payroll-management-system-project-in-c/
*/
void displayMenu() {
	std::cout << "What would you like to do?\n [1] Add Employee\n [2] Modify Employee\n [3] Delete Employee\n"
			  << " [4] Print Employee Salary Slip\n [5] Dispay an Employee Record\n [6] List Employees\n [7] Exit\nMake your selection: ";
	
}
int main()
{
	int menuChoice;
	std::ofstream employeeData;
	employeeData.open("employeeData.txt");
	while (employeeData.is_open())
	{
		displayMenu();
		std::cin >> menuChoice;
		switch (menuChoice){
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		case 7:
			employeeData.close();
			break;
		}
	}
}