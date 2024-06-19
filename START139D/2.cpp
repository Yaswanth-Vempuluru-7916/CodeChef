#include <bits/stdc++.h>
using namespace std;
long long solve(long long n,long long m){
    if(n>m){
        return n-m;
    }
    
    if(m%n==0){
        return 0;
    }
    
    return min((m%n),(n-(m%n)));
}
int main() {

    long long t;
    cin>>t;
    
    while(t--){
        long long n,m;
        cin>>n>>m;
        
        cout<<solve(n,m)<<endl;
        
    }

}
