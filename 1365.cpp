#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int a[n], b[3] = { 0,0,0 };
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		if (a[i] / 100)
			b[0] += a[i] / 100;
		if (a[i]%100/10)
			b[1] += a[i] % 100 / 10;
		if (a[i]%100%10)
			b[2] += a[i] % 100 % 10;
	}
	cout << b[0] << endl << b[1] << endl << b[2] << endl;
	return 0;
}