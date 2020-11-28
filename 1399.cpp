#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,s,y;
	cin>>n;
	for(int i=1;i<=n/2;i++){
		s=0;
		y=i;
		while(s<n){
			s+=y;
			y++;
		}
		if(s==n)
		cout<<i<<" "<<y-1<<endl;
	}
	return 0;
} 