#include<bits/stdc++.h>
using namespace std;
int main(){
	int f;
	cin>>f;
	if(90<=f)
	cout<<"A";
	else if(80<=f && f<90)
	cout<<"B";
	else if(70<=f && f<80)
	cout<<"C";
	else if(60<=f && f<70)
	cout<<"D";
	else
	cout<<"E";
	return 0;
} 