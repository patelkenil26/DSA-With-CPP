#include <iostream>
using namespace std;

void fancyPattern(int n)
{
    int c = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << c ;
            c++;
            if(j<i){
                cout << "*";
            }
        }
        cout << endl;
    }

    int start = c-n;
    for(int i=0;i<n;i++){
        int k=start;
        for(int j=0;j<n-i;j++){
            cout << k;
            k++;
            if(j<n-i-1){
                cout << "*";
            }
        }
        start = start - (n-i-1);
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter no of rows: ";
    cin >> n;
    fancyPattern(n);
    return 0;
}