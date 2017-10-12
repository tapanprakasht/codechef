#include<iostream>
long long gcd(long long a, long long b){
  if(a==0) return b;
  else return gcd(b%a,a);
}
using namespace std;
int main(){
  int t;
  long long a,b,g;
  cin>>t;
  while(t--){
    cin>>a>>b;
    g = gcd(a,b);
    cout<<g<<" "<<(a*b)/g<<"\n";
  }
}
