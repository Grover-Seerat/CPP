#include <iostream>
using namespace std;
class test
{
int code;
static int count;// static member variable
public:
void setcode (void)
{
code = ++count;
}
void showcode(void)
{
cout << "object number: " << code << "\n";
}
static void showcount (void)
{
// static member function
cout << "count:" << count << "\n";
}
};
int test::count=0;
int main()
{
test ta,tb,tc;
ta.setcode();
tb.setcode();
test :: showcount(); // accessing static function
tc.setcode();
test :: showcount();
ta.showcode();
tb.showcode();
tc.showcode();
return 0;
}