#include <iostream>
using namespace std;
int main()
{
	int a = 4, b = 7, c, n;
	double d = 4.0 / 7;
	cin >> n;
	for (int i = 2; i <= n; i++)
	{
		c = a + b;
		a = b;
		b = c;
		d += (double)a / b;
	}
	printf("%i/%i\n%.2f", a, b, d);
	return 0;
}
