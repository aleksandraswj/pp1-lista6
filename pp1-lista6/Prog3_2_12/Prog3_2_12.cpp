#include <iostream>

using namespace std;



double* newDoubleArray(unsigned int n)
{
	return new double[n];
}

int main()
{
	double* wsk = newDoubleArray(5);
	delete wsk;
}
