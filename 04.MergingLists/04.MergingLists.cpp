#include <iostream>
#include <vector>
#include <sstream> 
using namespace std;

int main() {
  
    string input1, input2;
    getline(cin, input1);
    getline(cin, input2);
        
    vector<int> list1, list2, result;
    istringstream iss(input1), istr(input2);
    
    int num;

    while (iss >> num) {
        list1.push_back(num);
    }

    while (istr >> num) {
        list2.push_back(num);
    }

    auto idx1 = list1.begin();
    auto idx2 = list2.begin();

    while (idx1 != list1.end() || idx2 != list2.end()) {
        
        if (idx1 != list1.end()) {
            result.push_back(*idx1);
            ++idx1;
        }
        
        if (idx2 != list2.end()) {
            result.push_back(*idx2);
            ++idx2;
        }
    }
        
    for (const auto& val : result) {
        cout << val << " ";
    }
    
    cout << endl;

    return 0;
}
