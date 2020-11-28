#include<bits/stdc++.h>
using namespace std;
int ts(int n){
	return sqrt(n);
}
int main(){
	int m,n;
	cin>>m;
	for(int i=0;i<m;i++){
		cin>>n;
		cout<<ts(n)<<endl;
	}
	return 0;
} 