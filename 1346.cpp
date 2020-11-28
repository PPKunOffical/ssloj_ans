#include<bits/stdc++.h>
using namespace std;
int main(){
	
	int a,gw,sw,bw,qw,fs;
	cin>>a;
	gw=a%10;
	sw=a/10%10;
	bw=a/100%10;
	qw=a/1000;
	fs=gw*1000+sw*100+bw*10+qw;
	printf("%i+%i=%i",a,fs,fs+a);
	
	return 0;
}