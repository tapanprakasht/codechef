#include<iostream>
using namespace std;
int main(int argc, char const *argv[]) {
  int t,n,i;
  long long p;
  cin>>t;
  while(t--){
    cin>>n;
    p = 1;
    for(i=1;i<=n;i++)
      p *= i;
    cout<<p<<endl;
  }
  return 0;
}
