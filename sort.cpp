#include<iostream>
using namespace std;

int main(int argc, char const *argv[]) {
  long long n, *a,i,j,temp;
  cin>>n;
  a = new long long[n];
  for(i = 0;i<n;i++) {
    cin>>a[i];
  }

  for(i=0;i<n;i++){
    for(j=0;j<n-1-i;j++){
      if(a[j+1]<a[j]) {
        temp = a[j];
        a[j] = a[j+1];
        a[j+1] = temp;
      }
    }
  }

  for(i = 0;i<n;i++) {
    cout<<a[i]<<"\n";
  }
  return 0;
}
