#include<iostream>
using namespace std;
int main()
{
 int n,i,f=0;
 cout << "enter a positive integer:::::::" << endl;
 cin >> n;
 for(i=2;i<=n/2;i++)
 {
  if(n%i==0)
  {
   f=1;
   break;
  }
 }
  if(f==0)
   cout << "prime";
  else
   cout << "composite" << endl;
  return 0;
 
}
