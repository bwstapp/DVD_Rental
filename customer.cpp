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
    	int id = 0;
    	char firstName[20] = " ";
    	char lastName[20] = " ";
    	cout << endl;
    	cout << "Add a Customer" << endl;
    	cout << "ID #: ";
    	cin >> id;
    	cout << "First Name: ";
    	cin.ignore();
    	cin.getline(firstName, 20);
    	cout << "Last Name: ";
    	cin.getline(lastName, 20);
    	cout << "Customer #" << id << "'s name is: " << firstName << " " << lastName;
    	cout << endl;getchar();
     }

     void editCustomer()
     {
    	inDev();
     }

     void viewCustomer()
     {
    	 inDev();
     }
