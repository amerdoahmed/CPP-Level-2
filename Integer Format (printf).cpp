#include <iostream>

using namespace std;

// Integer Format (printf)

int main()
{
    cout << "------------\n";
    cout << "C++ Level 2 \n";
    cout << "------------\n\n";

    int Page = 1, TotalPages = 10;

    // Print String and Int Variables
    printf("The page number = %d \n", Page);
    printf("You are in the page %d of %d \n", Page, TotalPages);

    // Width Specification 
    printf("The page number = %0*d \n", 2, Page);
    printf("The page number = %0*d \n", 3, Page);
    printf("The page number = %0*d \n", 4, Page);
    printf("The page number = %0*d \n", 5, Page);

    int Number1 = 20, Number2 = 30;
    printf("The Result of %d + %d = %d \n", Number1, Number2, Number1 + Number2);


    return 0;

}

