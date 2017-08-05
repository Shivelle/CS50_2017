#include <cs50.h>
#include <stdio.h>


// get argument count
int main(int argc, string argv[]) {
    // if there are two arguments
    if (argc == 2) {
        printf("hello, %s.\n", argv[1]); // concat Hello + 2nd argument
    } else {
        printf("hello world \n"); // default fallback
    }
}

