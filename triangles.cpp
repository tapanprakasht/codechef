#include<iostream>
using namespace std;
int main(int argc, char const *argv[]) {
  int t,a,b,c;
  cin>>t;
  while(t--){
    cin>>a>>b>>c;
    if(a<40 || a>178 || b<40 || b>178 || c<40 || b>178) cout<<"NO\n";
    else if(a+b+c == 180) cout<<"YES\n";
    else cout<<"NO\n";
  }
  return 0;
}
