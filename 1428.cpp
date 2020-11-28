#include<bits/stdc++.h>
using namespace std;
int xz(int x,int y){
	int m=0;
	for(int i=1;i<=x-1;i++){
		m+=i;
	}
	m+=y;
	return m;
}
int main(){
	int n;
	cin>>n;
	int sj[xz(n,n)];
	for(int i=1;i<=n;i++){
		for(int x=1;x<=i;x++){
			if(x==1||x==i)
			sj[xz(i,x)]=1;
			else{
				sj[xz(i,x)]=sj[xz(i-1,x-1)]+sj[xz(i-1,x)];
			}
			cout<<sj[xz(i,x)]<<" ";
		}
		cout<<endl;
	}
	return 0;
}