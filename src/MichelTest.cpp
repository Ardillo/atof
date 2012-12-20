//============================================================================
// Name        : MichelTest.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

using namespace std;

char readdata[5] = {'2', '6', '4', '3', '6'};
std::string data;

double atof(char s[]){
	double val, power;
	int i, sign;

	for (i = 0; isspace(s[i]); i++)
		;
	sign = (s[i] == '-') ? -1 : 1;
	if(s[i] == '+' || s[i] == '-')
		i++;
	for(val = 0.0; isdigit(s[i]); i++)
		val = 10.0 * val + (s[i] - '0');
	if(s[i] == '.')
		i++;
	for (power = 1.0; isdigit(s[i]); i++){
		val = 10.0 * val + (s[i] - '0');
		power *= 10.0;
	}
	return sign * val / power;
}

int main() {
	for(int i = 0 ; readdata[i] != 0 ; i++){
		data += readdata[i];
	}

	cout << data << endl << endl;

	double sum;
	sum = atof(readdata);


	printf("readdata: %s\n",readdata);

	cout << "sum == " << sum << endl;
	cout << "sum - 1 == " << (sum - 10) << endl;

	cout << endl << readdata << endl; // prints !!!Hello World!!!
	return 0;
}
