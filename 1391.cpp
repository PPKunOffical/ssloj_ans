#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,s=0,t,ans,yn;
	cin>>n;
	ans=n;
	yn=n;
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
	ans+=s;
	printf("%i+%i=%i",yn,s,ans);
	return 0;
} 