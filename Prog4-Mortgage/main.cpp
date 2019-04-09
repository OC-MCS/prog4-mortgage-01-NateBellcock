//Nate Bellcock
//02/20/19
//Porgraming Assignment number 4
//Descripton: Mortgage
#include<iostream>
#include<cmath>
#include<iomanip>
#include<string>
using namespace std;
#include"Mortgage.h"

bool goodInPut(string inPut, float & reslt);
bool goodInPut(string inPut, int & reslt);

int main()
{
	string input;
	float temp;
	Mortgage m1(5950, .20f, 3);
	cout << "Enter the loan amount: ";
	getline(cin, input);
	if (goodInPut(input))
	{
		 
	}

	return 0;
}

bool goodInPut(string inPut, float & reslt)
{
	float num;
	bool success = true;
	try
	{
		num = stof(inPut);   
		reslt = num;
	}
	catch (const std::exception&)
	{
		success = false;
	}
	return success;
}

bool goodInPut(string inPut, int &reslt)
{
	int num;
	bool success = true;
	try
	{
		num = stoi(inPut);
		reslt = num;
	}
	catch (const std::exception&)
	{
		success = false;
	}
	return success;
}