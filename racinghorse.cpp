#include<iostream>
using namespace std;
int main(int argc, char const *argv[]) {
  int t,n,i,j;
  long long *a,diff,temp;
  cin>>t;
  while (t--) {
    cin>>n;
    a = new long long[n];
    for(i=0;i<n;i++) {
      cin>>a[i];
    }

    for(i=0;i<n;i++) {
      for(j=0;j<(n-1)-i;j++) {
        if(a[j+1]< a[j]) {
          temp = a[j];
          a[j] = a[j+1];
          a[j+1] = temp;
        }
      }
    }
    diff = 1000000001;
    for(i=0;i<n-1;i++) {
      if((a[i+1] - a[i]) < diff) {
        diff = a[i+1] - a[i];
      }
    }
    cout<<diff<<endl;
  }
return 0;
}
