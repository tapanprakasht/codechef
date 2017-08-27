#include<iostream>
using namespace std;
int main(int argc, char const *argv[]) {
  long long n,*a,*count,*sort,i;
  cin>>n;
  a = new long long[n];
  count = new long long[1000001]();
  sort = new long long[n+1]();
  for(i=0;i<n;i++) {
    cin>>a[i];
    count[a[i]]++;
  }
  for(i=1;i<=1000001;i++) {
    count[i] += count[i-1];
  }
  for(i=0;i<n;i++) {
    sort[count[a[i]]-1] = a[i];
    --count[a[i]];
  }
  for(i=0;i<n;i++) {
    cout<<sort[i]<<"\n";
  }
  cout<<endl;

  return 0;
}
