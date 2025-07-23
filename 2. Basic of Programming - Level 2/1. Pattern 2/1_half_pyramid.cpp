// Triangle
//     * 
//    * * 
//   * * * 
//  * * * * 
// * * * * * 

#include <iostream>
using namespace std;

void halfPyramid(int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n - i - 1; j++)
    {
      cout << " ";
    }

    for (int j = 0; j < i + 1; j++)
    {
      cout << "* ";
    }

    cout << endl;
  }
}

int main()
{
  int n;
  cout << "Enter number of rows: ";
  cin >> n;
  cout << endl;
  halfPyramid(n);
  return 0;
}
