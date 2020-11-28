#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k=0,m=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		k+=i;
		m+=k;
	}
	cout<<m;
	return 0;
}