#include "complex.hpp"
#include <iostream>
using namespace std;

TComplex::TComplex()
{
	real = 0;
	imaginary = 0;
}
TComplex::TComplex(double b, double c)
{
	real = b;
	imaginary = c;
}
TComplex::TComplex(const TComplex &A)
{
	real = A.real;
	imaginary = A.imaginary;
}
TComplex TComplex::operator * (TComplex &N)const
{
	TComplex res(real, imaginary);
	res.real = real*N.real - imaginary*N.imaginary;
	res.imaginary = real*N.imaginary + imaginary*N.real;
	return res;
}
TComplex TComplex::operator / (TComplex &N)const
{
	TComplex res(real, imaginary);
	res.real = (real*N.real + imaginary*N.imaginary) / ((pow(N.real, 2) + pow(N.imaginary, 2)));
	res.imaginary = (N.real*imaginary - real*N.imaginary) / ((pow(N.real, 2) + pow(N.imaginary, 2)));
	return res;
}
TComplex& TComplex::operator += (const TComplex &N)
{
	real += N.real;
	imaginary += N.imaginary;
	TComplex res(real, imaginary);
	return res;
}
TComplex& TComplex::operator -= (const TComplex &N)
{
	real -= N.real;
	imaginary -= N.imaginary;
	TComplex res(real, imaginary);
	return res;
}
TComplex& TComplex::operator *= (const TComplex &N)
{
	double a = real*N.real - imaginary*N.imaginary;
	imaginary = real*N.imaginary + imaginary*N.real;
	real = a;
	return TComplex(real, imaginary);
}
TComplex& TComplex::operator /= (const TComplex &N)
{
	double a = (real*N.real + imaginary*N.imaginary) / (pow(N.real, 2) + pow(N.imaginary, 2));
	imaginary = (N.real*imaginary - real*N.imaginary) / ((pow(N.real, 2) + pow(N.imaginary, 2)));
	real = a;
	return TComplex(a, imaginary);
}
TComplex&  TComplex::operator = (const TComplex &N)
{
	if (&N == this)
		return *this;
	real = N.real;
	imaginary = N.imaginary;
	return *this;
}

const bool& TComplex::operator == (const TComplex &N)
{
	if (real == N.real&&imaginary == N.imaginary)
		return true;
	return false;
}
ostream& operator << (ostream &out, TComplex &N)
{
	if (N.imaginary > 0)
	{
		out << N.real << " + " << N.imaginary << "*i" << endl;
	}
	else
	{
		if (N.imaginary == 0)
			out << N.real << endl;
		else
			out << N.real << " " << N.imaginary << "*i" << endl;
	}
	return out;
}
istream& operator >> (istream &in, TComplex &N)
{
	cout << "Enter the real part of the complex number ";
	in >> N.real;
	cout << "Enter the imaginary part of the complex number ";
	in >> N.imaginary;
	return in;
}
