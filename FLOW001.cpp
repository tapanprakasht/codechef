#include<iostream>
using namespace std;
int main(int argc, char const *argv[]) {
  int t;
  double n;
  cin>>t;
  while(t--) {
    cin>>n;
    if(n<1500) {
      cout<<n+(0.1*n)+(0.9*n)<<endl;
    } else if(n>=1500) {
      cout<<n+500+(0.98*n)<<endl;
    }
  }
  return 0;
}
