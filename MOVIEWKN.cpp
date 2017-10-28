#include<iostream>
using namespace std;
int main(int argc, char const *argv[]) {
  int  t,*a,*b,i,index,r,k,c,n;
  cin>>t;
  while(t--){
    cin>>n;
    a = new int[n];
    b = new int[n];
    for(i=0;i<n;i++)
      cin>>a[i];
    for(i=0;i<n;i++)
      cin>>b[i];
    index = 0;
    r = b[0];
    k = a[0] * b[0];
    for(i=1;i<n;i++) {
      c = a[i] * b[i];
      if(c>k || (c==k && r<b[i])) {
        k = c;
        index = i;
        r = b[i];
      }
    }
    cout<<index+1<<endl;
  }
  return 0;
}
