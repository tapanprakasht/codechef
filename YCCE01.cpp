#include<iostream>
using namespace std;
int main(int argc, char const *argv[]) {
  int t;
  long long n,m;
  cin>>t;
  while(t--) {
    cin>>n>>m;
    if(((n*m)-1)%2 == 0) cout<<"No\n";
    else cout<<"Yes\n";
  }
  return 0;
}
