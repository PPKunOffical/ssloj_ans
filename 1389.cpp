#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n,ans=1000000000000000000,a,b,t;
	cin>>n;
	for(int i=1;i<=3;i++){
		cin>>a>>b;
		t=n/a*b;
		if(n%a>0)
		t+=b;
		if(t<ans)
		ans=t;
	}
	cout<<ans;
	return 0;
} 