#include<iostream>
using namespace std;
int main(int argc, char const *argv[]) {
  int t;
  char c;
  cin>>t;
  while(t--){
    cin>>c;
    if(c=='B' || c=='b') cout<<"BattleShip\n";
    else if(c=='C' || c=='c') cout<<"Cruiser\n";
    else if(c=='D' || c=='d') cout<<"Destroyer\n";
    else if(c=='F' || c=='f') cout<<"Frigate\n";
  }
  return 0;
}
