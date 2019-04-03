#pragma once
// header file for Mortgage class
class Mortgage
{
private:
	float payment;
	float loan;
	float rate;
	int years;
	void updatePayment();
	float findTerm();
public:
	Mortgage(float l = 100, float r = .045, int y = 1) { rate = r; loan = l; years = y;}
	void setLoan(float);
	void setRate(float);
	void setYears(int);
	float returnPayment();
	float total();
};
