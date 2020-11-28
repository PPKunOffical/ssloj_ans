#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n,m;
	cin>>n;
	m=n;
	long long s=0,i=0;
	while(m/2>0)
	{
		m/=2;
		i++;
	}
	long long a=pow(2,i);
	long long b=pow(2,i+1);
	if(n-a<=b-n)
	cout<<a;
	else
	cout<<b;
}