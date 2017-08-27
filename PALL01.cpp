#include<iostream>
using namespace std;
int main(int argc, char const *argv[]) {
  int t,n,mod,rev,temp;
  cin>>t;
  while(t--){
    cin>>n;
    temp = n;
    rev = 0;
    while(n>0){
      mod = n%10;
      rev = rev*10+mod;
      n/=10;
    }
    if(temp == rev) cout<<"wins\n";
    else cout<<"losses\n";
  }
  return 0;
}
