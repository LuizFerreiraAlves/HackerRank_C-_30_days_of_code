#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int number_of_test_cases;
    cin >> number_of_test_cases;

    for(int aux = 0; aux < number_of_test_cases; aux++){
        char word[10000];
        cin >> word;

        int i = 0;
        while(word[i] != '\0'){
            if(i % 2 == 0) cout << word[i];
            i++;
        }

        cout << " "; 
        i = 0;
        while(word[i] != '\0'){
            if(i % 2 == 1) cout << word[i];
            i++;
        }

        cout << endl;
    } 
    return 0;
}
