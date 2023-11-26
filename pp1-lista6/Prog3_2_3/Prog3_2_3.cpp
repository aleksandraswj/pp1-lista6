#include <iostream>

using namespace std;



void sortuj(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;	
}

int main()
{
	int a = 5;
	int b = 10;
	cout << a << "," << b << endl;
	sortuj(&a, &b);
	cout << a << "," << b << endl;
}
