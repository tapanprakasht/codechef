#include<iostream>
using namespace std;
int main(int argc, char const *argv[]) {
  int t,i;
  long long n,count;
  int a[] = {100,50,10,5,2,1};
  cin>>t;
  while(t--){
    cin>>n;
    count = 0;
    count = n / 100;
    for(i=1;i<6;i++) {
      if((n - (count * a[i-1]))>0) {
        cout<<"Count:"<<count;
        cout<<",Diff:"<<(n - count*a[i-1])<<endl;
        count += (n - count*a[i-1])/a[i];
      } else {
        break;
      }

    }
    cout<<count<<endl;
  }
  return 0;
}
