#include<iostream>
using namespace std;
int main()
{   
 int sum, n, i ;
 float av;
 cout<<"\n Enter the Value of N:";
 cin>>n;
 sum=0;
 i =1;
 while(i<=n)
 {
  sum= sum + i ;      
  i = i + 1;
 }
 cout<<"\n Sum is: "<<sum;
 av=(float) sum/n;
 cout<<"\n Average is :"<<av;
}

