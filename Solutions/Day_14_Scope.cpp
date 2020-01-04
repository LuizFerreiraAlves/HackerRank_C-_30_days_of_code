#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference {
    private:
    vector<int> elements;
  
  	public:
  	int maximumDifference;

	// Add your code here
    Difference(vector<int> a){
        elements = a;
    }

    void computeDifference(){
        maximumDifference = 0;

        //Initialize max with the mininum possible value and min with the maximum possible value
        int max = 1, min = 100;
        for(vector<int>::iterator it = elements.begin(); it != elements.end(); ++it){
            if(*it > max) max = *it;
            if(*it < min) min = *it;
        }

        //No need for abs() since max and min are positive integers
        maximumDifference = max - min;
    }

}; // End of Difference class

int main() {
    int N;
    cin >> N;
    
    vector<int> a;
    
    for (int i = 0; i < N; i++) {
        int e;
        cin >> e;
        
        a.push_back(e);
    }
    
    Difference d(a);
    
    d.computeDifference();
    
    cout << d.maximumDifference;
    
    return 0;
}
