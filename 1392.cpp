#include<iostream>
using namespace std;
int main(){
	long long n,m,p=10,z,y,f=0;
	cin>>n>>m;
	while(n/p>0){
		z=n/p;
		y=n%p;
		if(z+y==m){
			cout<<z<<"+"<<y<<"="<<m;
			f=1;
			break;
		}
		p*=10;
		
	}
	if(f==0){
		cout<<"Impossible!";
	}
	return 0;
} 