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
	double a,b,c,d,e,f,g,h;
	cin>>a>>b>>c>>d;//a1 b2 c1 d3
	if(b!=d){
		e=d;
		f=b;
		d=b*d;
		b=b*e;
		a=a*e;
		c=c*f;
	}
	g=a+c;
	h=b;
	if(bgbs(g,h)[0]!=1){
		int gbs=bgbs(g,h)[0];
		g/=gbs;
		h/=gbs;
	}
	cout<<g<<" "<<h;
	return 0;
} 