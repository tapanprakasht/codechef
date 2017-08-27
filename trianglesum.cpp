#include<iostream>
#include<cmath>
using namespace std;
int n,**a,**cache;
int findMaxSum(int i,int j){
  int t1,t2,t;
  if(i>=n) return 0;
  if(cache[i][j] != -1)
    return cache[i][j];
  t1 = findMaxSum(i+1,j);
  t2 = findMaxSum(i+1,j+1);
  t = a[i][j] + max(t1,t2);
  cache[i][j] = t;
  return t;
}

int main(int argc, char const *argv[]) {
  int t,i,j;
  cin>>t;
  while(t--) {
    cin>>n;
    a = new int*[n]();
    cache = new int*[n]();
    for(i=0;i<n;i++) {
      a[i] = new int[n]();
      cache[i] = new int[n]();
    }
    for(i=0;i<n;i++){
      for(j=0;j<n;j++) {
        cache[i][j] = -1;
      }
    }
    for(i=0;i<n;i++){
      for(j=0;j<=i;j++) {
        cin>>a[i][j];
      }
    }
    cout<<findMaxSum(0,0)<<endl;

  }
  return 0;
}
