#include<iostream>
using namespace std;
int main(int argc, char const *argv[]) {
  int t,n,k,count,a;
  cin>>t;
  while(t--){
    cin>>n>>k;
    count = 0;
    while(n--){
      cin>>a;
      if((a+k)%7 == 0) count++;
    }
    cout<<count<<endl;
  }
  return 0;
}
