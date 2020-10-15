#include <iostream>
using namespace std;

int main()
{
    int rows;
    int k=1;
    cout << "Enter number of rows: ";
    cin >> rows;

    for(int i = rows; i >= 1; --i)
    {
        for(int space = 0; space < rows-i; ++space)
            cout << " ";

        for(int j = k ; j <= rows; ++j)

            cout << j<<" ";

        cout << endl;
        k++;
    }
    k=rows;
    for(int i = 1; i <=rows; ++i)
    {
        for(int space = rows-i-1; space >= 0; --space)
            cout << " ";

        for(int j = k ; j <=rows ; ++j)

            cout << j<<" ";

        cout << endl;
        k--;
    }



    return 0;
}
