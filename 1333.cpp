#include<bits/stdc++.h> 
using namespace std;
int main(){
	int a,p,n,ans=0,f;
	cin>>n;
	cin>>p>>a;
	if(a>p)
	f=0;
	else
	f=1;
	for(int i=2;i<=n;i++){
		cin>>a>>p;
		if(a>p&&f==0 || p>a&&f==1){
			ans++;
			f=1-f;
		}
	}
	if(f)
	cout<<"peiqi"<<endl<<ans;
	else
	cout<<"aimili"<<endl<<ans;
	return 0;
}