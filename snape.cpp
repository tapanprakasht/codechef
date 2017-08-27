#include<iostream>
#include<cmath>
using namespace std;

int main()
{
int t;
cin >> t;
 while(t--)
 {
 int b, rs;
 cin >> b>> rs;

 double val1 ,val2;

 val1 = sqrt(rs*rs - b*b);
 val2 = sqrt(rs*rs + b*b);
cout<<val1 <<" "<<val2<<endl;
 }

}
