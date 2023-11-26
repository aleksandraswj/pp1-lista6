#include <iostream>

using namespace std;



int* minWskaznik(int* a, int* b)
{
	if (*a < *b)
		return a;
	else
		return b;
}

int main()
{
	int a = 5;
	int b = 10;
	cout << *minWskaznik(&a, &b);
}

