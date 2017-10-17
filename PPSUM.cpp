#include<iostream>
using namespace std;
int sum(int n) {
  return (n*(n+1)/2);
}
int main(int argc, char const *argv[]) {
  int t,d,n,res;
  cin>>t;
  while(t--) {
    cin>>d>>n;
    res = n;
    while(d--) {
      res = sum(res);
    }
    cout<<res<<endl;
  }
  return 0;
}
