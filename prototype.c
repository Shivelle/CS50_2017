#include <cs50.h>
#include <stdio.h>

// declare empty function
void print_name(string name); 

// main function
int main(void) {
    string s = get_string(); 
    print_name(s); 
}

// promised function
void print_name(string name) {
    printf("hello, %s\n", name); 
}