#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,sg=0;
	cin>>n;
	int c=n;
	n*=n;
	for(int i=1;i<=c;i++){
		for(int x=1;x<=c;x++){
			if(x<=i){
				sg++;
				cout<<sg<<" ";
			}
			else{
				cout<<sg<<" ";
			}
		}
		sg=0;
		cout<<endl;
	}
	return 0;
}
