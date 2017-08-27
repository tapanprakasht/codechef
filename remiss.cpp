#include<iostream>
#include<cmath>
using namespace std;
int main(int argc, char const *argv[]) {
  int t;
  long long a,b;
  cin>>t;
  while (t--) {
    cin>>a>>b;
    cout<<max(a,b)<<" "<<a+b<<endl;
  }
  return 0;
}
