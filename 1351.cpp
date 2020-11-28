#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
	long long k=1;
    cin>>n;
    for(int i=1;i<=n;i+=2){
    	k*=i;
	}
	cout<<k;
    return 0;
}