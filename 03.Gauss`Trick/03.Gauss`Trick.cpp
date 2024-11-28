#include <iostream>
#include <vector>
#include <sstream> 
#include <iterator>
using namespace std;

int main() {
   
    string input;
    getline(cin, input);
       
    vector<int> numbers;
    istringstream iss(input);
    
    int num;
    
    while (iss >> num) {
        numbers.push_back(num);
    }

    vector<int> result; 

    auto start = numbers.begin();
    auto end = numbers.end() - 1;

    while (start <= end) {
        
        if (start == end) {
            
            result.push_back(*start);
        }
        else {
            result.push_back(*start + *end);
        }
        ++start; // ѕремествам напред
        --end;   // премествам назад 
    }
       
    for (const auto& sum : result) {
        cout << sum << " ";
    }
    
    cout << endl;

    return 0;
}
