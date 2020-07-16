#include<stdio.h>
#include<iostream>
#include<conio.h>

using namespace std;
//******************************************************************************************
//		THE MAIN FUNCTION OF THE PROGRAM
//******************************************************************************************

void main()
{
	char ch;		// For switch operation
	//intro()		// Starting screen
	do
	{
		//clrscr();		// For clear the screen
		cout << "\n\n\n\tMAIN MENU";
		cout << "\n\n\tPlease Select Your Option (1-4)";
		ch=_getche();		// header file conio 
							// getche change to _getche
		switch (ch)
		{
		case 1:
			cout << "Under";
			break;
		case 2:
			cout << "under";
			break;
		case 3:
			cout << "Under";
		case 4:
			exit(0);
		default:
			cout << "\a";

		}
	} while (ch != '4');
	printf(" New project");

	getchar();
}