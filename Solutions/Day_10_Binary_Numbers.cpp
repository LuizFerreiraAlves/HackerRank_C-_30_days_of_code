#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    int n, aux = 0, max = 0, rest;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    
    while(n > 0){
        rest = n % 2;

        if(rest == 1){
            aux++;
            if(aux >= max) max = aux;
        } 
        else aux = 0;

        n = n/2;
    } 

    cout << max;

    return 0;
}
