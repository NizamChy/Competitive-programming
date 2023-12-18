//============================================================================
// Name        : CalculatorProject.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description :
//============================================================================

#include <iostream>
#include <stdio.h>
#include <stdlib.h>//all the libraries that the program used some of them are not required but I used it
#include <cmath>                      // since the program output an error message
#include <unistd.h>

using namespace std;

double total = 0.0;   // variables of the whole program
double sum = 0.0;

int quit()
{
	char option2;

	cout <<"Are you sure you want to quit from the program? (Y/N): "<<endl;
    cin >> option2;    // the program ask from user if he/she wants to quit or not

	if ((option2=='Y') || (option2=='y'))   // if statement that check the  input of the user
	{ //start brackets of if statement
		cout << "GoodBye!!! C ya later!!!.. "<<endl;  // goodbye message if the user wants to quit end the program exit at next line
		return(1);
	}//end brackets of if statement
	else // else of if statement
		if ((option2=='N') || (option2=='n'))  //if statement check if the user select N/n and continues
		{ //start bracket of if statement
			cout <<"You will now return to main menu!"<<endl;  //print message that the program will return to main menu
		}// end bracket of if statement
		else  //else of the second if statement
			cout << "Error input..."<<endl; // print an error message and inform the user that the program
			cout << endl;
	return(0);
}

void addition()    //function for the addition operation...
{
	double num1,num2;
    cout << "**********"<<endl;
    cout << "*Addition*"<<endl;
	cout << "**********"<<endl;  // welcome screen
	cout << "Enter 2 numbers to calculate: "<<endl;
	cin >> num1>>num2;   // ask from the user to at 2 numbers


	total = num1 + num2;  // the program makes the calculation of the two numbers
	sum += total;   // save the value and keep

	cout <<"The total sum of "<<num1<<" + "<<num2<<" = "<<total<<endl;  //prints out the equation
	cout << "The total of sum is now "<<sum<<endl;

}  // end brackets of addition function....

void subtraction()   // function of subtraction...
{
	double num1,num2;    // all the variables of the fuctions

	cout <<"*************"<<endl;
	cout <<"*Subtraction*"<<endl;
	cout <<"*************"<<endl;   // welcome screen
	cout <<"Enter 2 number to calculate: "<<endl;
	cin >> num1>>num2;    //ask from user to enter 2 numbers

	total = num1 - num2;    // the program make the calculation of subtraction
    sum +=total; //save the value

    cout <<"The subtraction of "<<num1<<" - "<<num2<<" = "<<total<<endl;  //prints out the equation
    cout << "The total of sum is now "<<sum<<endl;
}

void multiplication()  // function of multiplication
{

	double num1,num2; // all the variables of the function

    cout <<"****************"<<endl;
    cout <<"*Multiplication*"<<endl;
	cout <<"****************"<<endl;    //welcome screen
	cout <<"Enter 2 number to calculate: "<<endl;
	cin >> num1>>num2;    // ask from user to enter 2 numbers

	total = num1 * num2;  // the program make the multiplication
    sum += total;    //save the value

	cout << "The total multiplication of "<<num1<<" * "<<num2<<" = "<<total<<endl;  //prints out the equation
	cout << "The total of sum is now "<<sum<<endl;

}

void division()  //  function of division
{

	double num1,num2; // all the variables of the function

	cout <<"**********"<<endl;
	cout <<"*Division*"<<endl;
	cout <<"**********"<<endl;    //welcome screen of the function
	cout <<"Enter 2 number to calculate: "<<endl;
	cin >> num1>>num2;   //ask from user to enter 2 numbers

	total = num1 / num2;  // the program make the calculation
	sum += total;  //the program save the value

	cout << "The total division of "<<num1<<" / "<<num2<<" = "<<total<<endl; //prints out the equation
	cout << "The total of sum is now "<<sum<<endl;

}

void sum_squared()   // function of the sum squared
{
	double num1,num2;             //all the variables of the function
	double displayedVal;
	displayedVal = 0.0;

	cout <<"*************"<<endl;
	cout <<"*Sum squared*"<<endl;   // welcome screen of function
	cout <<"*************"<<endl;
	cout <<"Enter 2 number to calculate: "<<endl;
	cin >> num1>>num2;  //ask from user to enter 2 numbers

	displayedVal =  pow (num1, num2);   // the program make the calculation
	sum += displayedVal;

	cout << "The total sum  squared of "<<num1<<" ^ "<<num2<<" is "<<displayedVal<<endl;  // the program prints out the equation
	cout << "The total of sum is now "<<sum<<endl;

}

void less_than_relation() // function of less then relation
{
	double num1,num2;   //all the variables of the function

	cout <<"********************"<<endl;
	cout <<"*Less than relation*"<<endl;     // welcome screen
	cout <<"********************"<<endl;
	cout <<"Enter 2 number to calculate: "<<endl;
	cin >> num1>>num2;   // ask from user to add 2 numbers

	if (num1<num2)  // if statement to check the numbers if it's less
	{   //start bracket of if statement
		total = num2;  // change the value of total into num2 if it's biggest than num1
		sum += total;

		cout <<"The "<<num1<<" is smaller (<) than "<<num2<<endl;
		cout << "The total of sum is now "<<sum<<endl;
	} // end bracket of if statement
	else   // else of if statement
		total = num1;  // change the value of total into num1
		sum+= total;

		cout << "The first number "<<num1<<" is not smaller than "<<num2<<endl;  //prints the result if the num1 is smallest than num2
		cout << "The total of sum is now "<<sum<<endl;
}

void greater_than_relation()  // function of greater than relation
{

	double num1,num2; //all variables of the function

	cout <<"***********************"<<endl;
	cout <<"*Greater than relation*"<<endl; //welcome screen of the function
	cout <<"***********************"<<endl;
	cout <<"Enter 2 number to calculate: "<<endl;
	cin >> num1>>num2;  // ask from user to enter 2 numbers

	if (num1>num2)  // if statement check if the num1 is greater of num2
	{  //start bracket of if statement
		total = num1; // change the value of total into num1 if the num1 is greater than num2
		sum +=total;

		cout <<"The "<<num1<<" is greater than (>) "<<num2<<endl;   // prints the results if the num2 is greater tha num2
		cout << "The total of sum is now "<<sum<<endl;

	} //end bracket of the if statement
	else //else of if statement
		total = num2;  // change the value of total into num2
		sum += total;

		cout << "The first number "<<num1<<" is not greater than the second number "<<num2<<endl; // prints out  the results
		cout << "The total of sum is now "<<sum<<endl;
}

void clear()
{

    char option3;

	cout <<"Are you sure you want to clear the sum?(y/n) "<<endl;;
	cin >> option3;

		if ((option3 == 'y') || (option3 == 'Y'))
	{
		total = 0.0;
		sum = 0.0;

		cout <<"Your sum now is clear!!!"<<endl;
		cout <<"The total is now "<<sum<<endl;
		}
	else

		if ((option3 == 'n') || (option3 == 'N'))
		{
		 cout <<"Your sum now is not clear. You will return into main menue!!"<<endl;
		}
		else

	    	cout <<"Error!!!You have enter an invalid input.Please enter a valid input"<<endl;

}


void calculator()   // function of the calculator

{
	char opt;  // variables of calculation function

	cout <<endl;
	cout <<"*************************************"<<endl;
	cout <<"********Welcome To Calculator********"<<endl;              //welcome screen of the void function......
	cout <<"*************************************"<<endl;              //****************************************
	cout <<"Please chose an operator you want to used: "<<endl;
	cout <<"+: Addition" <<endl;
	cout <<"-: Subtraction" <<endl;
	cout <<"*: multiplication"<<endl;
	cout <<"/: division"<<endl;                                        //All the operators options that user has available to used....
	cout <<"^: sum squared"<<endl;
	cout <<"<: less than relation"<<endl;
	cout <<">: greater than relation"<<endl;
	cout <<"c: clear sum"<< endl;
	cout <<"q: quit"<< endl;
	cin >>opt;                     //reads the opt input from the user

switch (opt)  //switch statement for the previous option that user enter
{   // start bracket of the switch statement
case '+':   // case 1 for addition
	addition();   //called the function addition...
    break;  //break of the case addition

case '-':    // case 2 for subtraction
	subtraction();  // called the subtraction function....
	break; // break of the case subtraction

case '*':   // case 3 for multiplication
	multiplication();  // called the multiplication function...
	break;  // break of the case multiplication

case '/':   // case 4 for division
	division(); // called the division function...
	break; // break of the case division

case '^':  // case 5 for sum squared...
	sum_squared();  // called the sum_squared function
	break; // break of the case sum squared

case '<':  // case 6 for the less_than_relation function
	less_than_relation();  // called the less_than_relation function
	break; // break of the case less than relation

case '>':  // case 7 for the greater_than_relation function
	greater_than_relation(); // called the greater_than_relation function
	break; // break of the case greater than relation

case 'c':  // case 8 for the clear function

	clear();
	break;  // break of the case clear

case 'q':  // case 9 for the quit
	if (quit() == 1)
		{
			exit(0);  // called the quit function
		}
	break; // break of the case quit

default:
	cout <<"Error input..Please choose an option from the above menu!!!!"<<endl;


}//end bracket of the switch case
}

int main() // int main of the program include the total retrun

{   // start bracket of int main


char option1;

while (1) // while loop for int main... every time that the program makes a calculation the program  ask again from user if wants a new operator
	{   // start bracket of while loop

cout <<"********Welcome To Calculator********"<<endl;//   welcome screen of the program......
cout <<"*************************************"<<endl;//****************************************
cout <<"Please choose one of the following: ";
cout <<endl;
cout <<"1. Calculator "<<endl;
cout <<"2. Quit "<<endl;
cin >>  option1;              //ask from user to choose one of the option that are available


	if (option1 == '1')   // if statement of the option1
	{  // start bracket of if statement
	calculator();   // called the calculator function if the option1 is 1


	} // end bracket of if statement
	else   // else of if statement

	if (option1 == '2')  // if statement of option1 check if the user choose the second option
	{ //start bracket of if statement
        if (quit() == 1)
        {
        	break; // break of the while loop to stop the while
        }

	} // end of if statement

	else // else of if statement

		// if statement... check if the input of user is not 1 or 2
		// start bracket of if statement
		cout <<"Error Input......"<<endl; // prints out an error message if the user add a wrong input

	}
	return 0;  // return to 0
} //bracket for int main
