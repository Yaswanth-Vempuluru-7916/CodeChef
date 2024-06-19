#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int x;
	cin>>x;
	int cnt = 0;
	int i=1;
	while(i<=x){
	    if(i%2!=0){
	        cnt++;
	    }
	    i++;
	}
	
	cout<<cnt<<endl;

}
