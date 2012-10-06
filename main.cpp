#include <cstdlib>
#include <iostream>
#include "main.h"

using namespace std;

/********************************************
 * Main menu for the movie rental software. *
 ********************************************/

int main()
{
int quit = 1;
do{
    clear();
    int answer;
    cout << endl;
    cout << " Please select one of the following menu items: " << endl;
    cout << "1. Customers  ";
    cout << "2. Movies  ";
    cout << "3. Rented  ";
    cout << "4. Late  ";
    cout << "5. Code 140  ";
    cout << "6. About  ";
    cout << "7. Quit  " << endl << endl;
    cout << "Selection: ";
    cin >> answer;

    switch (answer)
    {
           case 1:
                customer();
                break;
           case 2:
                movies();
                break;
           case 3:
                rented();
                break;
           case 4:
                late();
                break;
           case 5:
                code140();
                break;
           case 6:
                clear();
                cout << endl;
                cout << "***   Program Lead: Nicolas Green ***" << endl;
                cout << "***    Programmer: Kodi Sneizko   ***" << endl;
                cout << "*** GUI Designer: Ashley Brackett ***" << endl;
                pause();
                break;
           case 7:
                quit = 2;
                break;
           default:
                cout << "That is an incorrect selection. Please try again.";
                pause();
                }
    }while(quit == 1);
}

/*
int main()
{
	clear();
	//int id;
	char firstName[20] = " ";
	//char lastName[20];
	//cin.clear();
	cout << endl;
	cout << "Add a Customer" << endl;
	cout << "Name: ";
	cin.getline(firstName, 20);
	//cout << endl;
	cout << "You said: " << firstName;
	pause();

}
*/
