#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {

    string input;
    getline(cin, input);

    istringstream iss(input);
    vector<int> numbers;
    
    int num;

    while (iss >> num) {
        
        if (num >= 0) {
            numbers.push_back(num);
        }
    }
        
    if (numbers.empty()) {
        cout << "empty" << endl;
    }
    else {
        reverse(numbers.begin(), numbers.end());

        for (size_t i = 0; i < numbers.size(); i++) {
            cout << numbers[i];

            if (i < numbers.size() - 1) {
                cout << " ";
            }
        }
        
        cout << endl;
    }

    return 0;
}
