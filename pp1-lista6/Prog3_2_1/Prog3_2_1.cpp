#include <iostream>

using namespace std;

int minWartosc(int a, int b)
{
	if (a < b)
		return a;
	else
		return b;
} 	

int minReferencja(const int& a, const  int& b)
{
	if (a < b)
		return a;
	else
		return b;
} 

int minWskaznik(const int* a, const int* b)
{
	if (*a < *b)
		return *a;
	else
		return *b;
} 


int main()
{
	int a = 5;
	int b = 10;	
	cout << minWskaznik(&a, &b);
}

