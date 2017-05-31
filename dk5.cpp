#include<iostream>
using namespace std;
int main()
{int i,j=1,n
 float b,a=0;
 cout << "Enter the number of terms\n" << endl;
 cin >> n;
 for(i=1;i<n;i++)
 {
  a=a+(1/(j*j));
  j++;
 }
 b=6*a;
 cout << "the sum is " << b;
 return 0;
}
