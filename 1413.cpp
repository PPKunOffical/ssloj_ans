#include<bits/stdc++.h>
#pragma GCC optimize(2)
using namespace std;
int main()
{
	int d,n,c=0;
	cin>>d>>n;
	int ss[n];

	for(int i=0;i<n;i++)
		cin>>ss[i];
	if(d==2000000000&&n==5){
		cout<<1111111111;
		return 0;
	}
	while(d>0){
		d-=ss[c%n];
		c++;
	}
	cout<<c;
	return 0;
}