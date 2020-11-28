#include<bits/stdc++.h>
using namespace std;
int main(){
	int kx,me=0,mo=0;
	for(int i=1;i<=12;i++){
		cin>>kx;
		me+=300;
		if(me<kx){
			cout<<-i;
			exit(0);
		}
		me-=kx;
		mo+=me/100*100;
		me%=100;
	}
	double ans=mo*1.2+me;
	cout<<ans;
	return 0;
} 