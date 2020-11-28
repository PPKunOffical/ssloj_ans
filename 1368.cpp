#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q,y,g=0;
    cin>>n;
    int h[n];
    for(int i=0;i<n;i++)
    {
    	cin>>h[i];
    	g+=h[i];
    }
    q=g/n;
    y=g%n;
    if(q>y){
    	q--;
    	y+=1*n;
    }
    cout<<q<<endl<<y;
    return 0;
}