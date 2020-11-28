#include <iostream>
using namespace std;
int main()
{
	int a, b, c = 0;
	cin >> a;
	for (int i = 1; i <= a; i++)
	{
		cin >> b;
		if (b!=i)
		{
			c++;
		}
	}
	cout << c;
	return 0;
}
