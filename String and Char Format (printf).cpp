#include <iostream>

using namespace std;



int main()
{
    cout << "------------\n";
    cout << "C++ Level 2 \n\n";
    cout << "String and Char Format (printf) \n";
    cout << "------------\n\n";

    char Name[] = "Ahmed Amerdo";
    char Github_Account[] = "https://github.com/amerdoahmed";

    // Print String 
    printf("Dear %s, How are you ? \n\n", Name);
    printf("Welcom to my github account : %s \n\n", Github_Account);

    char c = 'S';
    printf("Setting the with of c : %*c \n", 1, c);
    printf("Setting the with of c : %*c \n", 2, c);
    printf("Setting the with of c : %*c \n", 3, c);
    printf("Setting the with of c : %*c \n", 4, c);
    printf("Setting the with of c : %*c \n", 5, c);


    return 0;

}


