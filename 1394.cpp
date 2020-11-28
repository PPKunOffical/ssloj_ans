#include<bits/stdc++.h>
using namespace std;
int* bgbs(int a,int b){
	int ya=a,yb=b;
	int r;
	r=a%b;
	while(r){
		a=b;
		b=r;
		r=a%b;
	}
	int ans[2]={b,ya*yb/b};
	return ans;
}
int main(){
	int a,b;
	cin>>a>>b;
	cout<<bgbs(a,b)[1];
	return 0;
} 