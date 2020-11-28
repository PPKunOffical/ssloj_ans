#include<bits/stdc++.h>
using namespace std;
int main(){
	long int n,h=0;
	cin>>n;
	while(n!=1){
		
		if(n%2==1){
			cout<<n<<" ";
			n=n*3+1;
			
			h=1;
		}else{
			n/=2;
		}
	}
	if(h==0)
	cout<<"No number can be output!";
	return 0x0;
}