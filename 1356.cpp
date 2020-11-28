#include<bits/stdc++.h>
using namespace std;
int main(){
	
	for(int i=100;i<=999;i++){
		int a=i/100%10;
		int b=i/10%10;
		int c=i%10;
		if(pow(a,3)+pow(b,3)+pow(c,3)==i){
			cout<<i<<" ";
		}
	}
	cout<<endl;
	for(int i=1000;i<=9999;i++){
		int a=i/100%10;
		int b=i/10%10;
		int c=i%10;
		int d=i/1000%10;
		if(pow(a,4)+pow(b,4)+pow(c,4)+pow(d,4)==i){
			cout<<i<<" ";
		}
	}
	return 0;
}