#include <iostream>
using namespace std;
// Function to swap two numbers using call by reference
void swap(int &a, int &b) 
{
    int temp = a;
    a = b;
    b = temp;
}
int main() 
{
    int x, y;
    // Input two numbers
    cout << "Enter first number: ";
    cin >> x;
    cout << "Enter second number: ";
    cin >> y;
    // Display numbers before swapping
    cout << "Before swapping: " << "x = " << x << ", y = " << y << endl;
    // Call swap function
    swap(x, y);
    // Display numbers after swapping
    cout << "After swapping: " << "x = " << x << ", y = " << y << endl;
    return 0;
}