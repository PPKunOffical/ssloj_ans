#include <iostream>
using namespace std;
int main()
{
	int n, a, r1[2] = { 0,0 }, r2[2] = { 0,0 };
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a;
		if (a > 0)
			r1[0] += a, r1[1]++;
		if (a < 0)
			r2[0] += a, r2[1]++;
	}
	cout << r1[1] << " " << r1[0] << endl << r2[1] << " " << r2[0];
	return 0;
}
