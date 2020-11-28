#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	double m=0;
	cin>>n;
	for(int i=1;i<n;i+=2){
		m+=1.0/i-1.0/(i+1.0);
	}
	cout<<fixed<<setprecision(8)<<m;
	return 0;
}