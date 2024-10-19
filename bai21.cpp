#include <bits/stdc++.h> 
using namespace std; 
#define ll long long 
int main(){
    ll a,b; cin>>a>>b; 
    string s= to_string(a); 
    string s1= to_string(b); 
    if(a>b) cout<<s+s1; else cout<<s1+s;
}
