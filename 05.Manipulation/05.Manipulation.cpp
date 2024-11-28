#include <iostream>
#include <vector>
#include <sstream>
#include <algorithm> 
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

    string command;
       
    while (getline(cin, command)) {
        
        if (command == "end") {
            break;
        }

        istringstream cmdStream(command);
        string action;
        
        cmdStream >> action;

        if (action == "Add") {
            int value;
           
            cmdStream >> value;
            numbers.push_back(value);
        }
        else if (action == "Remove") {
            int value;
            
            cmdStream >> value;
            numbers.erase(remove(numbers.begin(), numbers.end(), value), numbers.end());
        }
        else if (action == "RemoveAt") {
            
            int index;
            cmdStream >> index;
           
            if (index >= 0 && index < numbers.size()) {
                numbers.erase(numbers.begin() + index);
            }
        }
        else if (action == "Insert") {
            
            int value, index;
            cmdStream >> value >> index;
            
            if (index >= 0 && index <= numbers.size()) {
                numbers.insert(numbers.begin() + index, value);
            }
        }
    }

   
    cout << endl;
    
    for (const auto& value : numbers) {
        cout << value << " ";
    }
   
    cout << endl;

    return 0;
}
