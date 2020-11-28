#include<bits/stdc++.h>
using namespace std;
int n,a[20],cnt=0;
int main(){
	cin>>n;
	while(n){
		a[++cnt]=n%2;
		n/=2;
	}
	for(int i=cnt;i>=1;i--)
	cout<<a[i];
	return 0;
}