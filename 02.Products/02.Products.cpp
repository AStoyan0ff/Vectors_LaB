#include <iostream>
#include <vector>
#include <string>
#include <algorithm> 
using namespace std;

int main() {
   
    int N; 
    cin >> N;
    cin.ignore(); 

    vector<string> products; 

       for (int i = 0; i < N; ++i) {
        
           string product;
           getline(cin, product); 
           products.push_back(product);
       }
           
    sort(products.begin(), products.end());
      
    int number = 1;

    for (const auto& product : products) {
        cout << number++ << "." << product << endl;
    }

    return 0;
}
