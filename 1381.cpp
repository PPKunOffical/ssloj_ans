#include<bits/stdc++.h>
using namespace std;
int pto(int n){
	int t,s,rans=0;
	while(n){
		t=n%10;
		n/=10;
		rans+=pow(t,3);
	} 
	return rans;
}
int main(){
	int n,count=1,sj;
	cin>>n;
	sj=pto(n);
	while(sj!=153){
		sj=pto(sj);
		count++;
	}
	cout<<count;
	return 0;
} 