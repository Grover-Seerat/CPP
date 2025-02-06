#include <iostream>
using namespace std;
void multiplyMatrices(int mat1[2][2], int mat2[2][2], int result[2][2]) 
{
    for (int i = 0; i < 2; i++) 
    {
        for (int j = 0; j < 2; j++) 
        {
            result[i][j] = 0;
            for (int k = 0; k < 2; k++)
            {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}
void printMatrix(int mat[2][2]) 
{
    for (int i = 0; i < 2; i++) 
    {
        for (int j = 0; j < 2; j++) 
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

int main() 
{
    int mat1[2][2];
    int mat2[2][2];
    int result[2][2];
    cout<<"enter matrix1\n";
    for (int i = 0; i < 2; i++) 
    {
        for (int j = 0; j < 2; j++) 
        {
            cin >> mat1[i][j]; 
            cout<< " ";
        }
        cout << endl;
    }
    cout<<"enter matrix2\n";
    for (int i = 0; i < 2; i++) 
    {
        for (int j = 0; j < 2; j++) 
        {
            cin >> mat2[i][j] ;
            cout<< " ";
        }
        cout << endl;
    }
    multiplyMatrices(mat1, mat2, result);
    cout << "Result of multiplication: " << endl;
    printMatrix(result);
    return 0;
}
