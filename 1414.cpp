#include<bits/stdc++.h>
#pragma GCC optimize(2)
using namespace std;
int main()
{
	int n;
	cin>>n;
	int nn[n],np[n];
	for(int i=1;i<=n;i++)
	cin>>nn[i-1];
	for(int i=1;i<=n;i++){
		int x=0;
		for(;x<n;x++){
			if(nn[x]==i){
				break;
			}
		}
		np[i-1]=x+1;
	} 
	for(int i=1;i<=n;i++)
	cout<<np[i-1]<<" ";
	return 0;
}