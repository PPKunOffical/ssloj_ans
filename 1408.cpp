#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	int ti[n+m];
	for(int i=0;i<n+m;i++){
		cin>>ti[i];
	}
	sort(ti,ti+n+m);
	for(int i=0;i<n+m;i++){
		cout<<ti[i]<<" ";
	}
	return 0;
} 