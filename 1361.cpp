#include <iostream>
using namespace std;
int main()
{
	int k, a = 1, b = 1;
	long long c = 1;
    cin >> k;
	if (k == 1|| k==2)
		c = 1;
	else {
		for (int i = 3; i <= k; i++)
		{
			c = a + b;
			a = b;
			b = c;
		}
	}
	cout << c;
	return 0;
}
