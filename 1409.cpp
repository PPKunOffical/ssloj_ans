#include<bits/stdc++.h>
using namespace std;
int main(){
	int chair=30;
	int apple_h[10],ss,apple=0;
	for(int i=0;i<10;i++){
		cin>>apple_h[i];
	}
	cin>>ss;
	for(int i=0;i<10;i++){
		if(apple_h[i]<=ss||apple_h[i]<=ss+chair)
		apple++;
	}
	cout<<apple;
	return 0;
} 