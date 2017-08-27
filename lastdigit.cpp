#include<iostream>
using namespace std;
int main(int argc, char const *argv[]) {
  int t;
  string s;
  cin>>t;
  while(t--){
    cin>>s;
    cout<<(s[0]-'0') + (s[s.length()-1] - '0')<<endl;
  }
  return 0;
}
