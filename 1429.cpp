#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m,ys=1;
	cin>>n>>m;
	int c=n/2;
	for(int i=0;i<c;i++){
		for(int x=0;x<m;x++){
			cout<<ys<<" ";
			ys++;
		}
		cout<<endl;
		int sy=ys+m-1;
		ys+=m;
		for(int x=1;x<=m;x++){
			cout<<sy<<" ";
			sy--;
		}
		cout<<endl;
	}
	if(n%2){
		for(int x=0;x<m;x++){
			cout<<ys<<" ";
			ys++;
		}
	}
	return 0;
}