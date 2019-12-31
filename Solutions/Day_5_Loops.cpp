#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for(int aux = 1; aux <= 10; aux++){
        cout << n << " x " << aux << " = " << n*aux << endl;
    }

    return 0;
}
