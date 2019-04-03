// implementation file for Mortgage class
#include<cmath>
using namespace std;
#include"Mortgage.h"


void Mortgage::setLoan(float l)
{
	if (!loan < 0) 
	{
		loan = l;
		updatePayment();
	}
}

void Mortgage::setRate(float r)
{
	if (!rate < 0)
	{
		rate = r;
		updatePayment();
	}
}

void Mortgage::setYears(int y)
{
	if (!years < 0)
	{
		years = y;
		updatePayment();
	}
}

void Mortgage::updatePayment()
{
	payment = ((loan * (rate / 12) * findTerm()) / (findTerm() - 1));
}

float Mortgage::findTerm()
{
	float term = (pow(1 + (rate / 12), 12 * years));
	return term;
}

float Mortgage::returnPayment()
{
	updatePayment();
	return payment;
}

float Mortgage::total()
{
	float t = 0;
	Mortgage m(loan,rate,years);
	
	while (m.years > 0)
	{
		for (int i = 0; i < 12; i++)
		{
			t += (returnPayment() - (returnPayment() * rate));
			m.loan -= (returnPayment() - (returnPayment() * rate));
		}
		m.years--;

	}
	return t;
}