#include<iostream>
using namespace std;
int main()
{
int guess=64, low=0, high=128, numguess=0;
int a=1;
cout<<"The game would guess your age in seven or less moves!!\nPress 1 if you are younger than the guess\nPress 2 if you are older than the guess\nPress 0 if the guess is correct\n\n";
while((numguess<=7)&&(a!=0))
{
cout<<"Are you " <<guess <<"years old?\n";
cin>>a;
numguess++;
switch (a)
{
case 0:
cout<<"Bullseye\n";
numguess=8;
break;
case 1:
high=guess;
guess=(low+high)/2;
break;
case 2:
low=guess;
guess=(low+high)/2;
break;
}
}
return 0;
}
