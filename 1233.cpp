#include<bits/stdc++.h> 
using namespace std;
int pd(int n){
	int t,s,count=0;
	while(n){
		t=n%10;
		s=s*10+t;
		n/=10;
		if(t==2){
			count++;
		}
	}
	return count;
}
int main(){
	int n,k,count=0;
	cin>>n>>k;
	for(;n<=k;n++){
		count+=pd(n);
	}
	cout<<count;
	return 0;
}
