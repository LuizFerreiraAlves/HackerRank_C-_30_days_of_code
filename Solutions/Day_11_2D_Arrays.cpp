#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int max_hourglass(vector<vector<int>> arr){
    //We should initialize max and temp with the minimal possible value
    int max = -63, temp = -63;
    for(int i = 0; i < 4; ++i){
        for(int j = 0; j < 4; ++j){
            temp = arr[i][j] + arr[i][j+1] + arr[i][j+2] + arr[i+1][j+1] +
                   arr[i+2][j] + arr[i+2][j+1] + arr[i+2][j+2];
            if(temp > max) max = temp;
        }
    }
    return max;
}

int main()
{
    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    cout << max_hourglass(arr);

    return 0;
}
