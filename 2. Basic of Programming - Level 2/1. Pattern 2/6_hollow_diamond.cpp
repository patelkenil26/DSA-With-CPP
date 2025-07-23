#include <iostream>
using namespace std;

void hollowHalfPyramid(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < i + 1; j++)
        {
            if (i == 0 /*|| i == n - 1 */|| j == 0 || j == i)
            {

                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

void invertedHollowHalfPyramid(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }

        for(int j=0;j<n-i;j++){
           if(/*i==0 ||*/ j==0 || i==n-1  || j==n-i-1){
            cout << "* ";
           }
           else{
            cout << "  ";
           }
        }
        cout << endl;
    }
}

void hollowDiamond(int n)
{
    hollowHalfPyramid(n);
    invertedHollowHalfPyramid(n);
}
int main()
{
    int n;
    cout << "Enter no of rows: ";
    cin >> n;
    hollowDiamond(n);
    return 0;
}