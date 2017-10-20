#include<iostream>
using namespace std;
int main(int argc, char const *argv[]) {
  int t,q,i,d;
  string s1,s2;
  cin>>t;
  while(t--) {
    cin>>s1>>s2;
    d = q = 0;
    for(i=0;i<s1.length();i++){
      if(s1[i]!=s2[i]) {
        d++;
        if(s1[i]=='?' || s2[i]=='?') {
          q++;
        }
      } else if(s1[i]==s2[i] && s1[i]=='?'){
        d++;
        q++;
      }


    }
    cout<<(d-q)<<" "<<d<<endl;
  }
  return 0;
}
