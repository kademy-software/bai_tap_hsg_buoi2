#include <bits/stdc++.h> 
using namespace std; 
#define ll long long 
int main(){
    ll a,b,c; cin>>a>>b>>c; 
    //a+b, a+c, b+c, 
    ll ab= a+b; ll ac=a+c; ll bc=b+c; 
    cout<<max(ac,max(ab,bc));
}
