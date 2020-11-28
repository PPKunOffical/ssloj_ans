#include<bits/stdc++.h> 
using namespace std;
int main(){
	long long n,p;
	cin>>n;
	p=2;
	cout<<n<<"=";
	while(n!=1){
		if(n%p==0){
			cout<<p;
			n/=p;
			if(n!=1)
			cout<<"*";
		}else
		p++;
		if(p>sqrt(n)){
			break;
		}
	}
	if(n!=1)
	cout<<n;
	return 0;
}