#include<bits/stdc++.h>
using namespace std;

int a[100010],n,p,q;
int main()
{
   cin>>n;
   for(int i=1;i<=n;i++)
   {
      cin>>p>>q;
      a[q]=p;
    }
    int h=a[0];
    while(h!=0)
    {
     cout<<h<<" ";
     h=a[h];
    }
    return 0;
}