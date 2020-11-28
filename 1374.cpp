#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,f,s=0,zd=0,zx=100000;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>f;
		s+=f;
		if(f>zd)
		zd=f;
		if(f<zx)
		zx=f;
	}
	double ans=(double)(s-zx-zd)/(n-2);
#if 0
	if(zx==zd)
	ans=(double)s/n;
#endif
	printf("%.2f",ans);
	return 0;
} 