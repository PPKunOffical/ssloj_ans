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
int fz(int n){
	int s=0,t;
	while(n){
		t=n%10;//3 2 1
		s=s*10+t;//3 32 321
		n/=10;//123 12 1
/*
3 3 12
2 32 1
1 321 0
*/
	}
	return s;
}
int main(){
	int a,b;
	cin>>a>>b;
	for(int i=a;i<=b;i++){
		if(zs(i)){
			if(fz(i)==i)
			cout<<i<<" ";
		}
	}
	return 0;
} 