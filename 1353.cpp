#include<bits/stdc++.h>
using namespace std;
int main(){
	int x,n,c=1;
	cin>>x>>n;
	for(int i=0;i<n;i++){
		c+=x*c;
	}
	cout<<c;
	return 0;
}