#include<iostream>
using namespace std;
int main()
{
    cout<<"enter number\n";
    int num;
    cin>>num;
    int rev=0,num1,d;
    num1=num;
    while(num!=0)
    {
       d=num%10;
       rev=rev*10+d;
       num=num/10;
    }
    if(num1==rev)
    cout<<"palindrome number";
    else
    cout<<"not a palindrome number";
    return 0;
}