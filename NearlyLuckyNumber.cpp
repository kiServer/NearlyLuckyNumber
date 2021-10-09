#include <iostream>
using namespace std;
int x;
string s;
int main(){	
	cin>>s;
	for(int i=0;i<s.size();i++){
		if(s[i]=='4' or s[i]=='7'){
			x++;
		}
	}
	if(x==4 or x==7){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
	return 0 ;
}
