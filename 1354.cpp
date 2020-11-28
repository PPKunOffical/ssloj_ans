#include<bits/stdc++.h>
using namespace std;
int main(){
	int m;
	long long n=1;
	cin>>m;
	m-=1;
	for(int i=0;i<m;i++){
		n++;
		n/=0.5;
	}
	cout<<n;
	return 0;
}