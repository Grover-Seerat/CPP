#include <iostream>
using namespace std;

int gcd(int a, int b) 
{
    int min;
    // Find Minimum of a and b
    if(a>b)
    min=b;
    else 
     min=a;
    // Testing divisiblity with all numbers starting from
    // min(a, b) to 1
    while (min > 1) 
    {
        // If any number divide both a and b, so we
        // got the answer
        if (a % min == 0 && b % min == 0)
        break;
        min--;
    }
    return min;
}

int main()
 {
    cout<<"enter two numbers\n";
    int a,b;
    cin>>a>>b;
    // Finding gcd of two numbers a and b
    cout << "gcd of numbers entered is = " << gcd(a, b);
    return 0;
}