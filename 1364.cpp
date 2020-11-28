#include <iostream>
using namespace std;
int main()
{
	long long a, n;
	cin >> a >> n;
	long long w[n];
	for (int i = 1; i <= n; i++)
	{
		cin >> w[i];
	}	
	for (int i = 1; i <= n; i++)
	{
		if (w[i] == a)
			a *= 2;
	}
	cout << a;
	return 0;
}