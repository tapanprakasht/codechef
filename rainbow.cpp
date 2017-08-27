#include<iostream>
using namespace std;
int main(int argc, char const *argv[]) {
  int t,n,*a,flag,k,i,j,r;
  cin>>t;
  while(t--) {
    cin>>n;
    a = new int[n];
    for(i=0;i<n;i++) {
      cin>>a[i];
    }
    k=1;
    flag = 1;
    for(i=0,j=n-1;i<=j;i++,j--) {
      if(a[i] == a[j]) {
        if(a[i] == k) k++;
        else if(a[i] != k) {
          r = k -1;
          if(a[i] == r) {
            continue;
          } else {
            flag = 0;break;
          }
        }
      } else {
        flag = 0;
        break;
      }

    }
    //cout<<k<<endl;
    if(flag && k==8) cout<<"yes\n";
    else cout<<"no\n";
  }
  return 0;
}
