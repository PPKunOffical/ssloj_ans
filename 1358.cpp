#include<bits/stdc++.h>
using namespace std;
int main(){
	int k,sub1,sub2,sub3,sub4=0;
	cin>>k;
	for(int i=10000;i<=30000;i++){
		sub1=i%1000;
		sub2=i/10%1000;
		sub3=i/100;
		if(sub1%k==0&&sub2%k==0&&sub3%k==0){
			cout<<i<<endl;
			sub4=i;
		}
	}
	if(sub4==0)
	cout<<"No";
	return 0;
}