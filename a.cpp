#include <bits/stdc++.h>
using namespace std;
int main() {
  int a,b,c;
  cin>>a>>b>>c;
  cout<<"minimum of 3 number is : "<< min(a, min(b,c))<<endl;
  cout<<"maximum of 3 number is : "<<max(a, max(b,c))<<endl;
  cout<<"minxx of 3 num : "<<min({a,b,c})<<endl;

}