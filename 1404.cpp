#include<bits/stdc++.h>
#pragma GCC optimize(2)
using namespace std;
int main()
{
	int nn,f=0,c=0,m;
	cin>>nn;
	int n[nn];
	for(int i=0;i<nn;i++)
	cin>>n[i];
	cin>>m;
	for(int i=0;i<nn;i++){
		if(n[i]==m){
			f=i+1;
			break;
		}
	}
	for(int i=0;i<nn;i++){
		if(n[i]==m)
		c++;
	}
	cout<<f<<" "<<c;
	return 0;
}