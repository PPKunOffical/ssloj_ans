#include<bits/stdc++.h> 
using namespace std;
int main(){
	int n,p=0,t,s=0,ans=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>t;
		if(t>=p)
		s++;
		else
		s=1;
		if(s>ans)
		ans=s;
		p=t;
	}
	cout<<ans;
	return 0;
}