#include<iostream>
using namespace std;
int main(int argc, char const *argv[]) {
  int n,a,b,lead=-1,temp = -1,win,pa= 0 ,pb=0;;
  cin>>n;
  while(n--) {
    cin>>a>>b;
    a += pa;
    b += pb;
    pa = a;
    pb = b;
    temp = (a-b)>=0? a-b:b-a;
    if(temp>lead) {
      lead = temp;
      if(a-b>=0) win = 1;
      else win = 2;
    }
  }
  cout<<win<<" "<<lead<<endl;
  return 0;
}
