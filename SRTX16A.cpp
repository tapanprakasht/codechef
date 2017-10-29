#include<iostream>
using namespace std;
int main(int argc, char const *argv[]) {
  int t;
  long long n,m;
  cin>>t;
  while(t--){
    cin>>n>>m;
    cout<<(n%m)<<endl;
  }
  return 0;
}
