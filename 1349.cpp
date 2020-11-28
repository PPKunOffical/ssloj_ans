#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n,c=0;
    cin>>m>>n;
    if(m%2==0)
    m++;
    for(int i=m;i<=n;i+=2){
    	c+=i;
	}
	cout<<c;
    return 0;
}