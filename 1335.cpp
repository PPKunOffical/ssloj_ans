#include<bits/stdc++.h>
using namespace std;
int main(){
	float w,money;
	cin>>w;
	if(w<=40)
	money=w*1.8;
	else
	money=40*1.8+(w-40)*2.2;
	money+=w*0.2;
	printf("%.2f",money);
	return 0;
} 