#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m=0;
    cin>>n;
    for(int i=1;i<=n;i++){
    	m+=i;
	}
	cout<<(long long)(pow(n,2)*pow(n+1,2)/4);
    return 0;
}