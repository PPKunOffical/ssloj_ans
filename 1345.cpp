#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b,c,d,f;
	cin>>a>>b>>c>>d;
	f=(c*60+d)-(a*60+b);
	cout<<f/60<<" "<<f%60;
	return 0;
}