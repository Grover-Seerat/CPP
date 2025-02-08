#include <iostream>
#include <string>
using namespace std;
class Book 
{
private:
    string title;
    string author;
public:
    // Constructor
    Book(string t, string a) : title(t), author(a) 
    {
        cout << "Book Created: " << title << " by " << author << endl;
    } 
    // Destructor
    ~Book() {
        cout << "Book Destroyed: " << title << " by " << author << endl;
    }
};
int main() 
{
    Book b1("2019", "The Archer");
    return 0;
}