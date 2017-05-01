#include <iostream>
using namespace std;

class TComplex
{
private:
	double real, imaginary;
public:
	TComplex();
	TComplex(double b, double c);
	TComplex(const TComplex &A);
	TComplex operator * (TComplex &N)const;
	TComplex operator / (TComplex &N)const;
	TComplex& operator += (const TComplex &N);
	TComplex& operator -= (const TComplex &N);
	TComplex& operator *= (const TComplex &N);
	TComplex& operator /= (const TComplex &N);
	TComplex& operator = (const TComplex &N);
	const bool& operator == (const TComplex &N);
	TComplex add(TComplex a) const;
	TComplex sub(TComplex a) const;
	TComplex multiplication(int a) const;
	TComplex division(int a) const;
	friend ostream& operator << (ostream &out, TComplex &N);
	friend istream& operator >> (istream &in, TComplex &N);
};