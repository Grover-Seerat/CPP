#include<iostream>
using namespace std;
int main()
{
   int i, space, rows, k = 0;
   cout<<"Enter the number of rows: \n";
   cin>>rows;
   for (i = 1; i <= rows; ++i, k = 0) 
   {
      for (space = 1; space <= rows - i; ++space) 
      {
         printf("  ");
      }
      while (k != 2 * i - 1)
       {
         printf("* ");
         ++k;
      }
      printf("\n");
   }
   return 0;
}