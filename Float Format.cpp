#include <iostream>

using namespace std;

// Float Format (printf)

int main()
{
    cout << "------------\n";
    cout << "C++ Level 2 \n\n";
    cout << "Float Format \n";
    cout << "------------\n\n";

    float PI = 3.14159265;

    // Precision specification
    printf("Precision specification Of %.*f\n", 1, PI);
    printf("Precision specification Of %.*f\n", 2, PI);
    printf("Precision specification Of %.*f\n", 3, PI);
    printf("Precision specification Of %.*f\n", 4, PI);

    float x = 7.0, y = 9.0;
    printf("\nThe Float division is : %.3f / %.3f = %.3f \n\n", x, y, x / y);

    double d = 12.45;
    printf("\nThe float Division is : %.3f \n", d);
    printf("\nThe float Division is : %.4f \n", d);


    return 0;

}


