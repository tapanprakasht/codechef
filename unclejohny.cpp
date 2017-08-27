#include<iostream>
using namespace std;
int main(int argc, char const *argv[]) {
  int t,k,n,i,j;
  long long *a,temp;
  cin>>t;
  while (t--) {
    cin>>n;
    a = new long long[n];
    for(i=0;i<n;i++) {
      cin>>a[i];
    }
    cin>>k;
    k--;
    for(i=0;i<n;i++) {
      for(j=0;j<(n-1)-i;j++) {
        if(a[j+1]<a[j]) {
          if(j+1 == k) {
            k = j;
          } else if(j == k){
            k = j + 1;
          }
          temp = a[j+1];
          a[j+1] = a[j];
          a[j] = temp;
        }
      }
    }
    cout<<k+1<<"\n";
  }
  return 0;
}
