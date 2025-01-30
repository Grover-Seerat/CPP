// Program to illustrate the working of objects and class in C++ Programming
#include <iostream>
using namespace std;
// create a class
// creating a class
class shoppingcart
{
    string name;
    double price;
    int quan;
    public:
    void getdata(void);
    void displaybill(void);
};
void shoppingcart :: getdata(void)
{
    cout<<"enter name of product\n";
    cin>>name;
    cout<<"enter price of product\n";
    cin>>price;
    cout<<"enter quantity of product\n";
    cin>>quan;
}
void shoppingcart :: displaybill(void)
{
    cout<<"product:"<<name<<"   ";
    cout<<"quantity:"<<quan<<"   ";
    cout<<"total amount to be paid:"<<(price*quan)<<"\n";
}
int main()
{
//creating 2 objects of shoppingcart
    shoppingcart item1,item2;
    item1.getdata();
    item1.displaybill();
    item2.getdata();
    item2.displaybill();
    return 0;
}