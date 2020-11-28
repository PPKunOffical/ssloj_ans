#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[10010],m,n,kill,p=1,c;
	cin>>m>>n;
	for(int i=1;i<=m;i++)
	a[i]=1;
	while(kill<m){
		c+=a[p];
		if(c==n){
			c=0;
			kill++;
			a[p]=0;
			cout<<p<<" ";
		}
		p++;
		if(p>m)
		p=1;
	}
	return 0;
}