#include<iostream>
using namespace std;
int main(int argc, char const *argv[]) {
  long long t,n,c,i,a,sum;
  cin>>t;
  while(t--){
    sum = 0;
    cin>>n>>c;
    for(i=0;i<n;i++) {
      cin>>a;
      sum += a;
    }
    if(c>=sum)
      cout<<"Yes\n";
    else
      cout<<"No\n";
  }
  return 0;
}
