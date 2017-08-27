#include<iostream>
using namespace std;
int main(int argc, char const *argv[]) {
  long long t,*a,*b,i,j,flag;
  while (cin>>t) {
    if(t==0) break;
    a = new long long[t+1];
    b = new long long[t+1];
    for(i=1;i<=t;i++){
      cin>>a[i];
      b[a[i]] = i;
    }
    flag = 1;
    for(i=1;i<=t;i++){
      if(a[i]!=b[i]) {
        flag = 0;
        break;
      }
    }
    if(flag) cout<<"ambiguous\n";
    else cout<<"not ambiguous\n";
  }
  return 0;
}
