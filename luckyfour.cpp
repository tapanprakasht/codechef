#include<iostream>
using namespace std;
int main(int argc, char const *argv[]) {
  long long t,count,i;
  string in;
  cin>>t;
  while(t--){
    cin>>in;
    count = 0;
    for(i=0;i<in.length();i++)
      if(in[i]=='4')
        count++;
    cout<<count<<endl;
  }
  return 0;
}
