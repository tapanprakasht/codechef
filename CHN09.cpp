#include<iostream>
using namespace std;
int main(int argc, char const *argv[]) {
  int t,a,b,i;
  string s;
  cin>>t;
  while(t--) {
    cin>>s;
    a = b= 0;
    for(i=0;i<s.length();i++){
      if(s[i]=='a')
        a++;
      else b++;
    }
    if(a<b)
      cout<<a<<endl;
    else
      cout<<b<<endl;
  }
  return 0;
}
