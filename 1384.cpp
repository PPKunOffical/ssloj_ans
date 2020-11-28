#include<bits/stdc++.h>
using namespace std;
int main()
{
	long int n,sept=0x01;
	cin>>n;
	for(int i=sept;n>0;i++){
		n-=i;
		if(n>=0)
		sept=i;
	}
	cout<<sept;
	return 0x0;
}