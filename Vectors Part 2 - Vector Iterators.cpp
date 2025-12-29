#include <iostream>
#include <vector>

using namespace std;

// Vectors Part 2 - Vector Iterators

int main()
{
    vector<int> num{ 1, 2, 3, 4, 5 };

    // declare iterator
    vector<int>::iterator iter;

    // using iterator with for loop
    for (iter = num.begin(); iter != num.end(); iter++)
    {
        cout << *iter << "  ";
    }

    return 0;
}