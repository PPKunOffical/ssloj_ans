#include<bits/stdc++.h>
using namespace std;
int w(int n){
	int ans=0,t;
	while(n){
		n/=10;
		ans++;
	}
	return ans;
}
int m(int n){
	int ans=0,t,ws=w(n);
	while(n){
		ans+=pow(n%10,ws);
		n/=10;
	}
	return ans;
}
int main()
{
	int n;
	cin>>n;
	while(1){
		if(m(n)==n)
		break;
		else
		n++;
	}
	cout<<n;
	return 0;
}