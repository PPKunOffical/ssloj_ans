#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,s=0,h=1,t;
	cin>>n;
	while(n>0){
		t=n%10;
		s+=t;
		h*=t;
		n/=10;
	}
	cout<<s<<endl<<h;
	return 0;
}
