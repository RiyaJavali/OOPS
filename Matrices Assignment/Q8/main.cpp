#include<iostream>
using namespace std;
int main()
{
    int a[10][10], b[10][10], c[10][10];
    int x, y, i, j;

    cout << "Enter the number of rows and columns for Message Matrix:\n";
    cin >> x >> y;

    // x denotes number rows in matrix A
    // y denotes number columns in matrix A
    cout << "Enter elements for Matrix :\n";
    for (i = 0; i < x; i++)
    {
        for (j = 0; j < y; j++)
        {
            cin >> a[i][j];
        }
        cout << "\n";
    }
    cout << "Matrix :\n";
    for (i = 0; i < x; i++)
    {
        for (j = 0; j < y; j++)
        {
            cout <<a[i][j]<<" ";
        }
        cout << endl;
    }



    for (i = 0; i < y; i++)
    {
        for (j = 0; j < x; j++)
        {
            b[i][j]=x+y;
        }
        cout << "\n";
    }

        for (i = 0; i < x; i++)
        {
            for (j = 0; j < x; j++)
            {
                c[i][j] = 0;
                for (int k = 0; k < y; k++)
                {
                    c[i][j] = c[i][j] + a[i][k] * b[k][j];
                }
            }
        }
        cout
                << "\n-----------------------------------------------------------\n";
        cout << "\n\nEncoded Matrix :\n\n";
        for (i = 0; i < x; i++)
        {
            for (j = 0; j < x; j++)
            {
                cout<< c[i][j]<<" ";
            }
            cout <<endl;
        }
    //getch();
    return 0;
}
