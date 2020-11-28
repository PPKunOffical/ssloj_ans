#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int m[101];
	set<int>s;
	for (int i = 0; i < n; ++i)
	{
		cin>>m[i];
		s.insert(m[i]);
	}
	cout<<s.size()<<std::endl;
	while(!(s.empty())){
		cout<<*s.begin()<<" ";
		s.erase(s.begin());
	}
	return 0;
} 