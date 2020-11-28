#include<bits/stdc++.h>
using namespace std;
#if 0


5 2 1

1


2 1 5

4
#endif
int main(){
	int c,d,h,count=0x0;
	cin>>c>>d>>h;
	for(int i=1;;i++){
		h-=c;
		if(h<=0){
			cout<<i;
			return 0;
		}
		h+=d;
	}
	return 0;
}