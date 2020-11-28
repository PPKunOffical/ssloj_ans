#include<bits/stdc++.h>
using namespace std;
int main(){
	int l[100010],n,lz=0,w;
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>l[i];
	for(int i=1;i<=n;i++){
		if(l[i]>lz){
			lz=l[i];
			w=i;
		}
	}
	l[w]=l[1];
	l[1]=lz;
	for(int i=1;i<=n;i++)
		cout<<l[i]<<" ";
	return 0;
} 