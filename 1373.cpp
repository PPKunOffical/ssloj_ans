#include <iostream>
using namespace std;
int main()
{
	long long w, n, t=0;
	cin >> w >> n;
	for (int i = 0; i < n; i++)
	{		
		if (w == 8)
			w = 1;
		if (w >= 1 && w <= 5)
			t++;
		w++;

	}
	cout << t * 8;
	return 0;
}
