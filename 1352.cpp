#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	long long wsnd=0,wsnn=1;
	cin>>n;
	for(int i=1;i<=n;i++){
		if(i==1){
			wsnn=1;
		}else{
			wsnn*=2;
		}
	}
	cout<<wsnn;
	return 0;
}