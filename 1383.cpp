#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,z=0;
	cin>>n;
	z=n;
	while(n>=3){
		z+=n/3;
		n=n/3+n%3; 
	}
	cout<<z;
	return 0;
} 