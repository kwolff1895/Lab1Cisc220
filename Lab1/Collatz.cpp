/*
 * Collatz.cpp
 *
 *  Created on: Sep 12, 2016
 *      Author: Kimberly
 */
#include <iostream>
#include <stdlib.h>
using namespace std;

int count(int i);
int Collatz2();

int main(){ //asks for user input of a natural, positive number,
	//changes it from a string to an int, and uses count function
	//to print how many loops until it gets to 1.
	string number;
	cout<<"Please enter a natural positive number: ";
	cin>>number;
	int i = atoi(number.c_str());
	if (i<0){
		cout<<"The number entered is not positive, please try again: ";
		cin>>number;
	}
	return i;
	count(i);

}

int count(int i){   //returns how many times it looped until it gets to 1
	int count = 0;
	while(i!=1){
		if (i%2==0){ //if number is even
			i = i/2;
			count = count++; //adds one loop to count
			}
		else{ //if number is odd
			i = (i*3) +1;
			count = count++; //adds one loop to count
		}
	}
	return count;
}

int Collatz2(){
	int number1;
	int number2;
	cout<<"Please enter a natural positive number: ";
	cin>>number1;
	if (number1<=0){ //checks if number is positive, if not, asks user to input another number
		cout<<"The number entered is not positive, please try again: ";
				cin>>number1;
	}
	cout<<"Please enter a natural positive number: ";
		cin>>number2;
		if (number2<=0){ //checks if number is positive, if not, asks user to input another number
				cout<<"The number entered is not positive, please try again: ";
						cin>>number2;
			}
		if (number1<number2){ //if number1 is less than number2, calls main function on number1 and
			//then adds one to number1 until it reaches number2, calling main function on each number
			while (number1<number2){
				int count(number1);
				int main();

				cout<<"The number input is:" <<number1;
				if (number1%2==0){
					cout<<"The number returned is: "<<number1/2;
				}
				else{
					cout<<"The number returned is: "<<(number1*3)+1;
				}
				cout<<"Collatz Conjecture is still working";
				number1++;
			}
		}
		if (number2<number1){ //if number2 is less than number1, calls main function on number2 and
			//then adds one to number2 until it reaches number1, calling main function on each number
			while (number2<number1){
				int count(number2);
				int main();
				cout<<"The number input is:" <<number2;
				if (number2%2==0){
				cout<<"The number returned is: "<<number2/2;
				}
				else{
					cout<<"The number returned is: "<<(number2 * 3)+1;
				}
				cout<<"Collatz Conjecture is still working";
				number2++;
			}
		}
		return 0;
}



