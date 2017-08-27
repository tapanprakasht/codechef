#include<iostream>
using namespace std;
int main(int argc, char const *argv[]) {
  long long t,n,mod,sum;
  cin>>t;
  while(t--){
    cin>>n;
    sum = 0;
    while (n>0) {
      mod = n%10;
      sum += mod;
      n = n/10;
    }
    cout<<sum<<endl;
  }
  return 0;
}
