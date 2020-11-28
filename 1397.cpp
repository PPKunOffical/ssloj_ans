#include<bits/stdc++.h> 
using namespace std;
int pd(int n,int k){
	int t,s;
	while(n){
		t=n%10;//3 2 1
		s=s*10+t;//3 32 321
		n/=10;//123 12 1
		if(t>k){
			return 0;
		}
/*
3 3 12
2 32 1
1 321 0
*/
	}
	return 1;
}
int main(){
	int n,k,count=0;
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		if(pd(i,k))
		count++;
	}
	cout<<count;
	return 0;
}