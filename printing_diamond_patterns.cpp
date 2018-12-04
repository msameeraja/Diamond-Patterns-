/*
Author: Sameeraja Mamidipalli (Sam)
Purpose: Program to print a diamond pattern with '*'and ' '(space) based on number of rows requested by the user
*/

#include <iostream>
using namespace std;

int main(){
	//defining variables
	int no_of_rows,
		row,
		top_rows,
		bottom_rows;
		
	do {
		//Requesting user input
		cout << "Enter number of rows or enter 0 to quit: ";
		cin >> no_of_rows;
		
		//Checking if the number entered is even or odd		
		//If even number is entered do this:
		if ((no_of_rows%2)==0) {
		top_rows = no_of_rows/2;
		bottom_rows = top_rows;
				
			for (row = 1; row<=top_rows; row++)
			{
			cout << string(top_rows-row,' ');
			cout << string((row*2)-1,'*');			
			cout <<"\n";
			}
			
			for (row = bottom_rows; row>=1; row--)
			{			
			cout << string(bottom_rows-row,' ');
			cout << string((row*2)-1,'*');			
			cout <<"\n";
			}	
		}

		//If odd number is entered do this:
		else {
			top_rows = (no_of_rows+1)/2;
			bottom_rows = top_rows - 1;
		
			for (row = 1; row<=top_rows; row++)
			{
				cout << string(top_rows-row,' ');
				cout << string((row*2)-1,'*');			
				cout <<"\n";
			}
			
			for (row = bottom_rows; row>=1; row--)
			{				
				cout << string((bottom_rows+1)-row,' ');
				cout << string((row*2)-1,'*');				
				cout <<"\n";
			}	
		}
	}
	
	//To process user input and produce diamond patterns as long as this condition is met
	while (no_of_rows>0);
	
	//print this if condition is not met
	cout << "Goodbye!" << endl;
    
    return 0;
}

/*
Output:
Enter number of rows or enter 0 to quit: 1
*
Enter number of rows or enter 0 to quit: 2
*
*
Enter number of rows or enter 0 to quit: 3
 *
***
 *
Enter number of rows or enter 0 to quit: 4
 *
***
***
 *
Enter number of rows or enter 0 to quit: 5
  *
 ***
*****
 ***
  *
Enter number of rows or enter 0 to quit: 6
  *
 ***
*****
*****
 ***
  *
Enter number of rows or enter 0 to quit: 7
   *
  ***
 *****
*******
 *****
  ***
   *
Enter number of rows or enter 0 to quit: 8
   *
  ***
 *****
*******
*******
 *****
  ***
   *
Enter number of rows or enter 0 to quit: 9
    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *
Enter number of rows or enter 0 to quit: 10
    *
   ***
  *****
 *******
*********
*********
 *******
  *****
   ***
    *
Enter number of rows or enter 0 to quit: 0
Goodbye!

--------------------------------
Process exited after 23.96 seconds with return value 0
Press any key to continue . . .
*/
