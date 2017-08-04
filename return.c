#include <cs50.h>
#include <stdio.h>

// declare empty function
int square(int n); 

// main function
int main(void) {
    printf("x is: "); 
    int x = get_int(); 
    printf("x^2 is %i\n", square(x)); 
}

// promised function
int square(int n) {
    return n * n; 
}