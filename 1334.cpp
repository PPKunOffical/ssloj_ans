#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	if(n<=27)
		cout<<27-n;
	else
	{
		n=30-(n-27);
		cout<<n;
	}
	return 0;
}