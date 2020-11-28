#include<bits/stdc++.h>
using namespace std;
int main(){
	int father,mother,me;
	cin>>father>>mother>>me;
	if(me==1){
		cout<<(father+mother+13)/2;
	}else{
		cout<<(father+mother-13)/2;
	}
	return 0;
} 