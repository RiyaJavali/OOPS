#include <iostream>
using namespace std;

#define MAX 100

bool isOrthogonal(int a[][MAX],
				int m, int n)
{
if (m != n)
	return false;

// Multiply A*A^t
for (int i = 0; i < n; i++)
{
	for (int j = 0; j < n; j++)
	{

	int sum = 0;
	for (int k = 0; k < n; k++)
	{
		sum = sum + (a[i][k] * a[j][k]);
	}

	if (i == j && sum != 1)
		return false;
	if (i != j && sum != 0)
		return false;
	}
}

return true;
}

// Driver Code
int main()
{

int a[][MAX] = {{1, 0, 0},
				{0, 1, 0},
				{0, 0, 1}};
for(int i=0;i<3;i++)
{
    for(int j=0;j<3;j++)
        cout<<a[i][j]<<" ";
    cout<<endl;
}
if (isOrthogonal(a, 3, 3))
	cout << "Yes";
else
	cout << "No";
return 0;
}
