#include <iostream>

using namespace std;

int suma(const int* a, const int* b)
{
	return *a + *b;	
}


int main()
{
	int a = 5;
	int b = 10;
	cout << suma(&a, &b);
}

