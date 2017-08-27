#include<iostream>
using namespace std;
int main(int argc, char const *argv[]) {
  int t,n,m,a,*res,count,i;
  cin>>t;
  while(t--) {
    cin>>n>>m;
    res = new int[n+1]();
    for(i=0;i<m;i++) {
      cin>>a;
      res[a] = 2;
    }
    count =0;
    for(i=1;i<=n;i++) {
      if(res[i]!=2) {
        if(count%2 ==0) {
          res[i] = 1;
        } else {
          res[i] = 3;
        }
        count++;
      }
    }
    for(i=1;i<=n;i++) {
      if(res[i] == 1) {
        cout<<i<<" ";
      }
    }
    cout<<endl;
    for(i=1;i<=n;i++) {
      if(res[i] == 3) {
        cout<<i<<" ";
      }
    }
    cout<<endl;

  }
  return 0;
}
