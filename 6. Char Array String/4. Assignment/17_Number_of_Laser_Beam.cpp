#include <iostream>
#include <vector>
using namespace std;

int countDevices(string &binary)
{
    int c = 0;
    for (auto br : binary)
    {
        c = c + br - '0';
    }
    return c;
}

int numberOfLaserBeam(vector<string> &str)
{
    vector<int> devices;
    for (auto binary : str)
    {
        devices.push_back(countDevices(binary));
    }

    int beam = 0;
    for (int i = 0; i < devices.size(); i++)
    {
        int j = i + 1;
        while (j < devices.size())
        {
            beam = beam + devices[i] * devices[j];

            if (devices[j] == 0)
            {
                j++;
            }
            else
            {
                break;
            }
        }
    }
    return beam;
}

int main()
{
    // vector<string> str = {"011001", "000000", "010100", "001000"};
    vector<string> str = {"011001", "000000", "010100", "001000","101010"};
    cout << numberOfLaserBeam(str);

    return 0;
}