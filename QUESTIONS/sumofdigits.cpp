#include<iostream>
using namespace std;
int main()
{
    cout<<"enter number\n";
    int num,ld,sum=0;
    cin>>num;
    while(num!=0)
    {
        ld=num%10;
        sum=sum+ld;
        num=num/10;
    }
    cout<<"sum of digits = "<<sum;
}