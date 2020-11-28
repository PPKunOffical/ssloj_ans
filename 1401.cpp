#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n,s=0,ii,f;
	cin>>n;
	for(int i=1;i<=n;i++){
		if(i%7==0)
		continue;
		ii=i;
		f=1;
		while(ii>0){
			if(ii%10==7){
				f=0;
				break;
			}
			ii/=10;
		}
		if(f==1)
		s+=pow(i,2);
	}
	cout<<s;
	return 0;
} 