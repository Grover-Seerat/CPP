#include <iostream>
using namespace std;
int m = 10;// global m
int main()
{
int m= 20; // m redeclared, local to main
{
int k=m;
int m=30; // m declared again
// local to inner block
cout << "we are in inner block \n";
cout << "k=" << k << "\n";
cout << "m="<< m <<"\n";//displaying m in inner block
cout << "::m= "<< ::m <<"\n";//displaying global m
} 
cout << "\nWe are in outer block \n";
cout << "m ="<< m << "\n";//displaying m in int main block
cout<<"::m = "<< ::m << "\n";//displaying global m
return 0;
}