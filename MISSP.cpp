#include <algorithm>
#include<iostream>
#include<stack>
using namespace std;
int main(int argc, char const *argv[]) {
  int t,n,*a,i;
  cin>>t;
  while(t--){
    cin>>n;
    a = new int[n];
    stack<int> mystack;
    for(i=0;i<n;i++){
      cin>>a[i];
    }
    sort(a,a+n);
    mystack.push(a[0]);
    i=1;
    while(i<n){
      if(!mystack.empty() && mystack.top() == a[i])
        mystack.pop();
      else mystack.push(a[i]);
      i++;
    }
    if(!mystack.empty())
      cout<<mystack.top()<<endl;
  }
  return 0;
}
