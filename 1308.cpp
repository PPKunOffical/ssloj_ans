#include<bits/stdc++.h>
using namespace std;
int main(){
	int sh,sm,ss,oh,om,os;
	cin>>sh>>sm>>ss>>oh>>om>>os;
	if(sh<oh){
		cout<<(oh*3600+om*60+os)-(sh*3600+sm*60+ss);
	}else{
	cout<<(sh*3600+sm*60+ss)-(oh*3600+om*60+os);
	}
	
	return 0;
} 