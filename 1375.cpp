#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
	cin>>n;
	int d[n-1];
	for(int i=0;i<n;i++){
		cin>>d[i];
	}
	sort(d,d+n);
	cout<<d[n-1]<<" "<<d[n-2];
    return 0;
}