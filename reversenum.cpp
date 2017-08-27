#include<iostream>
using namespace std;
int main(int argc, char const *argv[]) {
  int t,mod;
  long long n,rev;
  cin>>t;
  while(t--){
    cin>>n;
    rev = 0;
    while(n>0){
      mod = n%10;
      rev = rev *10+mod;
      n /=10;
    }
    cout<<rev<<endl;
  }
  return 0;
}
