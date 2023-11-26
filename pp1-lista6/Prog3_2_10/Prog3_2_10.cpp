#include <iostream>

using namespace std;



double* newDouble()
{
	return new double;
}

int main()
{
	double* wsk = newDouble();
	*wsk = 5.5;
	cout << *wsk << endl;
	delete wsk;
}
