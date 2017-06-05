#include<iostream>
#include<string.h>
using namespace std;
int main()
{
 int x[5]={100,2,3,4,5},n;
 for(int i=0; i<5;i++)
 cout << x[i] <<" " ;
 char name[50]="my name";
 // print name using loops
 cout << "enter name\n";
 cin >> name;
 n=strlen(name);
 for(int i=0;i<n;i++)
 cout << name[i];

 // print name using loops
 return 0;
}
