#include <iostream>

using namespace std;

// - Memory Management: new and delete 2

int main()
{
    int num;
    cout << "Enter number of students." << endl;
    cin >> num;

    float* ptr;

    // memory allocation of number of floats
    ptr = new float[num];

    cout << "Enter grades of students." << endl;

    for (int i = 0; i < num; i++)
    {
        cout << "Student number " << i + 1 << " : " << endl;
        cin >> *(ptr + i);
    }

    cout << "\nDisplaying grades of students : " << endl;
    for (int i = 0; i < num; i++)
    {
        cout << "Student Number " << i + 1 << " : " << *(ptr + i) << endl;
    }

    delete[] ptr;


    return 0;
}