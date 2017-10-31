#include<iostream>
using namespace std;
int main(int argc, char const *argv[]) {
  int t,n,a,m,k,i;
  cin>>t;
  while(t--) {
    cin>>n>>m;
    k = -1;
    for(i=0;i<n;i++){
      cin>>a;
      if(a>k) k =a;
    }
    if(k<m) cout<<"RESIGN"<<endl;
    else cout<<k<<endl;
  }
  return 0;
}
