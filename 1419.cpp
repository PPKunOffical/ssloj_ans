#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[3010],b[200010],n,p,t;
	cin>>p;
	while(p--){
		cin>>n;
		for(int i=1;i<=n;i++)
		cin>>a[i];
		memset(b,0,sizeof(b));
		for(int i=1;i<n;i++){
			t=abs(a[i]-a[i+1]);
			b[t]=1;
		}
		int s=0;
		for(int i=1;i<=n-1;i++)
		s+=b[i];
		if(s==n-1)
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
	}
	return 0;
}