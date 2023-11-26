#include <iostream>

using namespace std;

void przepisanie(int n, int* w)
{
	*w = n;
}
int main()
{
	int w = 5;
	int n = 10;
	przepisanie(n, &w);
	cout << w;
}
