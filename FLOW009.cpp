#include<iostream>
#include<iomanip>
using namespace std;
int main(int argc, char const *argv[]) {
  long long t,q;
  long double p;
  cin>>t;
  while (t--) {
    cin>>q>>p;
    if(q<=1000) {
      cout<<fixed<<setprecision(6)<<q*p<<endl;
    } else {
      cout<<fixed<<setprecision(6)<<(q*p)-((q*p)/10)<<endl;
    }
  }
  return 0;
}
