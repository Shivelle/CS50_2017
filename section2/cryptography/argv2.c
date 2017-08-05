#include <cs50.h>
#include <stdio.h>
#include <string.h>


// get argument count
int main(int argc, string argv[]) {
    
    // iterate over string in argv
    for (int i  = 0; i < argc; i++) {
        
        // iterate over characters in current string
       for (int j = 0, n = strlen(argv[i]); j < n;  j++) {
           
           // print j'th characteri n i'th string
            printf("%c\n", argv[i][j]);    
       }
    }
}

