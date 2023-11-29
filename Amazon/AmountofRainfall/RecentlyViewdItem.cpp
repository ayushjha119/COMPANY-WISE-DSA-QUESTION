#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>
#include <iostream>

using namespace std;

vector<string> recentlyViewedItems(vector<string> logs) {
    vector<string> output;
    unordered_map<string, bool> seen;

    for (auto it = logs.rbegin(); it != logs.rend(); ++it) {
        if (seen.find(*it) == seen.end()) {
            output.push_back(*it);
            seen[*it] = true;
        }
    }

    return output;
}

int main() {
    vector<string> logs;
    int n;
    
    cin >> n;
    cin.ignore();  // To ignore the newline character after reading 'n'
    
    for (int i = 0; i < n; ++i) {
        string item;
        getline(cin, item);  // Use getline to read a line of input (including spaces)
        logs.push_back(item);
    }

    vector<string> output = recentlyViewedItems(logs);

   
    for (const auto& item : output) {
        cout << item << endl;
    }

    return 0;
}
