#include<bits/stdc++.h>
using namespace std;
int zs(int n){
	int f=1;
	for(int j=2;j*j<=n;j++){
		if(n%j==0){
			return 0;
		}
	}
	return 1;
}
int fz(int d,int n){
	int s=0;
	while(n){
		if(d==n%10)
		return 1;
		n/=10;
	}
	return 0;
}
int main(){
	int a,b,d,ans=0;
	cin>>a>>b>>d;
	for(int i=a;i<=b;i++){
		if(zs(i)){
			if(fz(d,i))
			ans++;
		}
	}
	cout<<ans;
	return 0;
}
