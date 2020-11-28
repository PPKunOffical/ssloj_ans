#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k;
	cin>>n;

	for(int i=2;i<=n;i++){	
		if(i>=1 && i<10)
		k=10;
		else if(i<100)
		k=100;
		else
		k=1000;
		if(i*i%k==i)
		cout<<i<<" ";
	}
	return 0;
}