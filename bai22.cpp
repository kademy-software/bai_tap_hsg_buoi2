#include <bits/stdc++.h> 
using namespace std; 
#define ll long long 
int main(){
   ll a,b; cin>>a>>b; 
   double no; 
  //TH1: nếu a = 0 và b = 0 thì phương trình vô số nghiệm
  //TH2: nếu a = 0 và b != 0 thì phương trình vô nghiệm
  //TH3: Nếu a != thì x = -b / a
  if( a==0){
      if(b==0) cout<<"MULTIPLE"; 
      if(b!=0) cout<<"NONE"; 
      
  } else cout<<(double)-b/a;
  
}
