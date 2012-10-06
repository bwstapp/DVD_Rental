#include <cstdlib>
#include <iostream>
#include "main.h"

using namespace std;

/*****************************************
 * This is to handle all of the functions*
 * pertaining to adding new and editing  *
 * old customers.                        *
 *****************************************/

void addCustomer();
void editCustomer();
void viewCustomer();

void customer()
{
     int quit = 1;
     int answer;
     do
     {
     clear();
     cout << endl;
     cout << "Customers" << endl;
     cout << "1. Add a Customer    2. Edit a Customer    3. View Customer" << endl << "4. Return to Main Menu" << endl;
     cin >> answer;

     switch (answer)
     {

     case 1:
    	 addCustomer();
    	 break;
     case 2:
    	 editCustomer();
    	 break;
     case 3:
    	 viewCustomer();
    	 break;
     case 4:
    	 quit = 2;
    	 break;
     default:
    	 cout << "That is an incorrect selection. Please try again";
    	 pause();
    	 break;
    	 }
     }while(quit == 1);
     }


     void addCustomer()
     {
    	clear();
    	//int id;
    	char firstName[200] = " ";
    	//char lastName[20];
    	//cin.clear();
    	cout << endl;
    	cout << "Add a Customer" << endl;
    	cout << "Name: ";
    	cin.ignore();
    	cin.getline(firstName, 200);
    	//cout << endl;
    	cout << "You said: " << firstName;
    	pause();
     }

     void editCustomer()
     {
    	inDev();
     }

     void viewCustomer()
     {
    	 inDev();
     }
