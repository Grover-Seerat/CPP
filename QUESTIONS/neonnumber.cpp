#include<iostream>
using namespace std;
int main()
{
  int num;
  cout<<"enter number\n";
  cin>>num;
  int sqnum=num*num;
  int d , sum=0;
  while(sqnum!=0)
  {
    d=sqnum%10;
    sum=sum+d;
    sqnum=sqnum/10;
  }
  if(sum==num)
  cout<<"neon number";
  else
  cout<<"not a neon number";
  return 0;
}