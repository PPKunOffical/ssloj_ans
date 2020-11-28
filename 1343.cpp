#include<bits/stdc++.h>
using namespace std;
int main()
{
    int h,f=0;
    char z;
    cin>>h>>z;
    h=h-1000;f=8;
    while(h>0)
    {
	h-=500;
	f+=4;
	}
    
    if(z=='y')
	f+=5;
    cout<<f;
    return 0;
}