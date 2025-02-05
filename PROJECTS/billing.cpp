#include <iostream>
using namespace std;
class Item 
{
public:
    string name;
    double price;
    int quantity;
    void input() 
    {
        cout << "Enter item name: ";
        cin >> name;
        cout << "Enter price: ";
        cin >> price;
        cout << "Enter quantity: ";
        cin >> quantity;
    }
    void display() 
    {
        cout << name << " - Rs" << price << " x " << quantity << " = Rs" << price * quantity << endl;
    }
};
class Customer
{
public:
    string name;
    int numItems;
    Item cart[10]; // Maximum of 10 items per customer
    double totalBill = 0.0;
    void input() 
    {
        cout << "\nEnter customer name: ";
        cin >> name;
        cout << "Enter number of items: ";
        cin >> numItems;
        for (int i = 0; i < numItems; i++) {
            cout << "\nItem " << i + 1 << ":\n";
            cart[i].input();
            totalBill += cart[i].price * cart[i].quantity;
        }
    }
    void display() 
    {
        cout << "\nCustomer: " << name << endl;
        cout << "Items Purchased:\n";
        for (int i = 0; i < numItems; i++) {
            cart[i].display();
        }
        cout << "Total Bill: $" << totalBill << endl;
    }
};
int main()
 {
    int numCustomers;
    cout << "Enter number of customers: ";
    cin >> numCustomers;
    Customer customers[numCustomers];
    // Taking input for each customer from the user
    for (int i = 0; i < numCustomers; i++) {
        cout << "\n Customer " << i + 1 << ":\n";
        customers[i].input();
    }
    // Displaying the bill for each customer
    cout << "\nBilling Details:\n";
    for (int i = 0; i < numCustomers; i++)
     {
        customers[i].display();
    }
    return 0;
}