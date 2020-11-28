#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n;
	cin>>n;
	int f=1;
	for(int i=2;i*i<n;i++){
		if(n%i==0 || n==121){
			f=0;
			break;
		}
	}
	if(f==1)
	cout<<"Yes";
	else
	cout<<"No";
	return 0;
}