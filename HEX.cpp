#include<iostream>
#include<string>
using namespace std;
int main(int argc, char const *argv[]) {
  int t,i,n,mod;
  cin>>t;
  while(t--){
    string hex;
    cin>>n;
    while(n>0) {
      mod = n % 16;
      if(mod == 10) hex += 'a';
      else if(mod == 11) hex += 'b';
      else if(mod == 12) hex += 'c';
      else if(mod == 13) hex += 'd';
      else if(mod == 14) hex += 'e';
      else if(mod == 15) hex += 'f';
      else hex += to_string(mod);
      n = n/16;
    }
    for(i=hex.length()-1;i>=0;i--)
      cout<<hex[i];
    cout<<endl;
  }
  return 0;
}
