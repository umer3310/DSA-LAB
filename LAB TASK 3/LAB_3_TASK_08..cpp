
#include <iostream>
using namespace std;
int main()
{
    int matrix[4][4];
    cout << "Enter 16 values for the 4x4 matrix: " << endl;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> matrix[i][j];
        }
    }
    int key;
    cout << "Enter the value to search for: ";
    cin >> key;
    bool found = false;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (matrix[i][j] == key)
            {
                cout << "Value found at row " << i << " and column " << j << endl;
                found = true;
                break;
            }
        }
        if (found)
            break;
    }

    if (!found)
    {
        cout << "Value not found in the matrix." << endl;
    }
    system("pause");
}
