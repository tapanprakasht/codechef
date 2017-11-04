#include<iostream>
using namespace std;
int main(int argc, char const *argv[]) {
  int t,n,ccount,hcount,i,flag;
  long long p,c,h,a;
  cin>>t;
  while(t--){
    ccount = hcount = 0;
    flag = 0;
    cin>>n>>p;
    c = p/2;
    h = p/10;
    for(i=0;i<n;i++){
      cin>>a;
      if(a>=c && ccount<=1){
        ccount++;
      } else if(a<=h && hcount<=2) {
        hcount++;
      }
    }
    if(hcount==2 && ccount==1) cout<<"yes\n";
    else cout<<"no\n";
  }
  return 0;
}
