#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	if(n/m==0){
		cout<<1;
	}else{
		int x=n/m;
		int y=n%m;
		if(y!=0){
			cout<<x+1;
		}else{
			cout<<x;
		}
	}
	return 0;
} 