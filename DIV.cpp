#include<iostream>
using namespace std;
int main(int argc, char const *argv[]) {
  int t;
  long long a,i,sum;
  cin>>t;
  while(t--){
    cin>>a;
    sum = 1;
    for(i=2;i<a;i++) {
      if(a%i==0)
       sum += i;
    }
    cout<<sum<<endl;
  }
  return 0;
}
