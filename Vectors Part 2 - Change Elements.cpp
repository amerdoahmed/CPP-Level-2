#include <iostream>
#include <vector>

using namespace std;

// Vectors Part 2 : - Change Elements

int main()
{
    vector<int> num{ 1,2,3,4,5 };

    cout << "Initial Vector: ";
    for (const int& i : num)
    {
        cout << i << " ";
    }

    cout << "\n\nUpdate Vector: ";
    for (int& i : num)
    {
        i = 20;
        cout << i << " ";
    }

    num[0] = 10;
    num[2] = 30;
    num[3] = 40;
    num[4] = 50;

    cout << "\n\nUpdate Vector: ";
    for (const int& i : num)
    {
        cout << i << " ";
    }

    return 0;
}