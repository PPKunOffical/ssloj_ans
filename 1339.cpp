#include<bits/stdc++.h>
using namespace std;
int main(){
	int y,m;
	cin>>y>>m; 
	if(y%4==0 && y%100!=0 || y%400==0){
		if(m<=7){
			if(m%2==1){
				cout<<31;
			}else if(m==2){
				cout<<29;
			}else{
				cout<<30;
			}
		}else{
			if(m%2==0){
				cout<<31;
			}else{
				cout<<30;
			}
		}
	}else{
		if(m<=7){
			if(m%2==1){
				cout<<31;
			}else if(m==2){
				cout<<28;
			}else{
				cout<<30;
			}
		}else{
			if(m%2==0){
				cout<<31;
			}else{
				cout<<30;
			}
		}
	}
	return 0;
} 