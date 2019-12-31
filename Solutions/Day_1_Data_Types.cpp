#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";
    
    // Declare second integer, double, and String variables.
    
    // Read and save an integer, double, and String to your variables.
    
    // Print the sum of both integer variables on a new line.
    
    // Print the sum of the double variables on a new line.
    
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    int j;
    double e;
    char t[100];

    scanf("%d", &j);
    scanf("%lf", &e);
    scanf(" %[^\n]", t);
    
    int m, n;
    for (m = 0; s[m] != '\0'; ++m) {}
    // concatenating each character of s2 to s1
    for (n = 0; t[n] != '\0'; ++n, ++m) {
        s[m] = t[n];
    }
    // terminating s1 string
    s[m] = '\0';

    printf("%d\n%.1f\n", i + j, d + e);
    printf("%s\n", s);

    return 0;
}
