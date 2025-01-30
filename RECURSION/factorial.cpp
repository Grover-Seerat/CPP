#include<iostream>
using namespace std;
long long int fact(int);
long long int fact(int a)
{
    if(a==0)
    return 1;
    else
    return (a*fact(a-1));
}
int main()
{
    int num;
    long long int res;
    cout<<"enter number\n";
    cin>>num;
    res=fact(num);
    cout<<"factorial of "<<num<<" is = "<<res;
    return 0;
}