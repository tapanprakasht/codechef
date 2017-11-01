#include<iostream>
#include<algorithm>
using namespace std;
int main(int argc, char const *argv[]) {
  int t;
  long long n,*a,i,sum;
  cin>>t;
  while(t--){
    sum = 0;
    cin>>n;
    a = new long long[n];
    for(i=0;i<n;i++)
      cin>>a[i];
    sort(a,a+n,greater<long long>());
    for(i=0;i<n;i+=2)
      sum+=a[i];
    cout<<sum<<endl;
  }
  return 0;
}
