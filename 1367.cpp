#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r,n;
    cin>>r>>n;
    int a[n],i,cnt=0,x=0,y=0;
    for(i=0;i<n;i++)
    {
    	cin>>a[i];
        x=y+a[i];
        y=x;
        if(abs(x)<=r)
            cnt++;
    }
    cout<<cnt;
    return 0;
}