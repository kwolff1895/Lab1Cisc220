/*
 * random.cpp
 *
 *  Created on: Sep 13, 2016
 *      Author: Kimberly
 */
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

#ifndef NULL
#define NULL   ((void *) 0)
#endif

int main(){
	srand(time(NULL));
	int x = rand();
	int y = rand();
	int z = rand();

	cout<<"The value of x is: "<<x;

}


