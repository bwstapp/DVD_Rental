#include <cstdlib>
#include <iostream>
#include <string>
#include "main.h"

using namespace std;

void pause()
{
     cout << endl << endl;
     system("PAUSE");
}

void clear()
{
     system("CLS");
}

char yesNo(string question)
{
     char answer;
     cout << question << endl;
     cout << "(y)es or (n)o?" << endl;
     cin >> answer;
     return answer;
}


void inDev()
{
     clear();
     cout << endl;
     cout << "This feature is still in development. Sorry" << endl;
     pause();
}

void returnVarVal(string variable, string value)
{
	clear();
	cout << "For " << variable << " you entered: " << value;
}
