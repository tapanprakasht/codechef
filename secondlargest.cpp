#include<iostream>
using namespace std;
int main(int argc, char const *argv[]) {
  int t;
  long long a[3],temp,i,j;
  cin>>t;
  while(t--){
    cin>>a[0]>>a[1]>>a[2];
    for(i=0;i<3;i++){
      for(j=0;j<2-i;j++){
        if(a[j+1]>a[j]) {
          temp = a[j+1];
          a[j+1] = a[j];
          a[j] = temp;
        }
      }
    }
    cout<<a[1]<<endl;

  }
  return 0;
}
