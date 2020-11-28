#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b,t,bb,ans=0;
	cin>>a>>b;
	bb=b;
	while(a>0){
		t=a%10;
		while(b>0){
			ans+=b%10*t;
			b/=10;
		}
		b=bb;
		a/=10;
	}
	cout<<ans;
	return 0;
} 