#include<iostream>
using namespace std;
int main(){
  long long t,n,i;
  int cake,simple,easy,medium,hard,total;
  string s;
  cin>>t;
  while(t--){
    cake = simple =easy=medium=hard = total=0;
    cin>>n;
    for(i=0;i<n;i++){
      cin>>s;
      if(!s.compare("cakewalk")) {
        cake++;
      } else if(!s.compare("simple")) {
        simple++;
      } else if(!s.compare("easy")) {
        easy++;
      }else if(!s.compare("easy-medium") || !s.compare("medium")) {
        medium++;
      }else if(!s.compare("medium-hard") || !s.compare("hard")) {
        hard++;
      }
    }
    if(cake>0 && simple>0 && easy>0 && medium>0 && hard>0) cout<<"Yes\n";
    else cout<<"No\n";
  }

}
