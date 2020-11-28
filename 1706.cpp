#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,i,j;
   cin>>n;
   for(i=1;i<=n;i++)
   {
    	for(j=1;j<=n+i-1;j++)
    	{
			if(j==n+1-i||j==n+i-1)
	    		cout<<"*";
	    	else 
				cout<<" ";
	    	
		}
		cout<<"\n";
	}
    for(i=1;i<n;i++)
    {
	    for(j=1;j<=2*n-i-1;j++)
	    {
	        if(j==i+1||j==2*n-i-1)
	    		cout<<"*";
	    	else 
				cout<<" ";
	    	     	
		}
		cout<<"\n";   
    }
   return 0;
}