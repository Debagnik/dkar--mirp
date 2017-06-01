#include<iostream>
using namespace std;
int main()
{
 int i,j,n,k;
 cout << "enter the the number of lines" << endl;
 cin >> n;
 for(i=0;i<n;i++)
 {
  for(j=(n-i);j>=2;j--)
  {
   cout << "*";
  }
  for(k=0;k<=i;k++)
  {
   cout <<  k+1; 
  }
  cout << "\n";
 }
 return 0;
}

