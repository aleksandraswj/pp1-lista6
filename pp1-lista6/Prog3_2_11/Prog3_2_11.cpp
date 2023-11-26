#include <iostream>

using namespace std;



int* newIntArray(unsigned int n)
{
	return new int[n];
}

int main()
{
	int* wsk = newIntArray(5);
	delete wsk;
}
