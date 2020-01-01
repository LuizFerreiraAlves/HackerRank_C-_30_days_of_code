#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>

using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n, phoneNumber;
    string name, nameToCheck;
    cin >> n;

    map<string, int> phone; 

    for(int aux = 0; aux < n; ++aux){
        cin >> name >> phoneNumber;
        phone.insert(pair <string, int>(name, phoneNumber));
    }

    while(cin >> nameToCheck){
        if(phone.find(nameToCheck) != phone.end()) 
            cout << nameToCheck << "=" << phone.find(nameToCheck)->second << endl;
        else cout << "Not found" << endl;
    }
    return 0;
}
