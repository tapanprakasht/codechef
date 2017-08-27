#include<iostream>
#include<cmath>
using namespace std;
int main(int argc, char const *argv[]) {
  int t,r,x1,x2,x3,y1,y2,y3;
  double d1,d2,d3;
  cin>>t;
  while(t--) {
    cin>>r;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    d1 = sqrt(pow(x1-x2,2) + pow(y1-y2,2));
    d2 = sqrt(pow(x1-x3,2) + pow(y1-y3,2));
    d3 = sqrt(pow(x2-x3,2) + pow(y2-y3,2));
    if(d1 <= r && d2 <= r ) {
      cout<<"yes"<<endl;
    } else if( d3<=r && (d1<=r || d2<=r)) {
      cout<<"yes"<<endl;
    } else {
      cout<<"no"<<endl;
    }
  }
  return 0;
}
