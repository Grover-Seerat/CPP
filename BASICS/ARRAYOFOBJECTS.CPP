#include<iostream>
using namespace std;
class employee
{
    char name[30];
    float age;
    public:
    void getdata(void);
    void putdata(void);
};
void employee::getdata(void)
{
    cout<<"enter name\n";
    cin>>name;
    cout<<"enter age\n";
    cin>>age;
}
void employee::putdata(void)
{
    cout<<"name:"<<name<<"\n";
    cout<<"age:"<<age<<"\n";
}
int main()
{
    cout<<"how many managers?\n";
    int size;
    cin>>size;
    employee manager[size];
    for(int i=0;i<size;i++)
    {
        cout<<"details of manager "<<i+1<<"\n";
        manager[i].getdata();
    }
    for(int i=0;i<size;i++)
    {
        cout<<"details entered of manager "<<i+1<<"\n";
        manager[i].putdata();
    }
    return 0;
}