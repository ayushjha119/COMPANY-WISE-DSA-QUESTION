
#include <bits/stdc++.h>

using namespace std;

<<<<<<< HEAD
vector<string> solve(const vector<string> &items){

   unordered_map<string, int> itemCounts;
    for (const auto& item : items) {
        itemCounts[item]++;
    }

    // Sort the items based on their counts and original order
    vector<string> sorted_items = items;
    sort(sorted_items.begin(), sorted_items.end(), [&](const string& a, const string& b) {
        return itemCounts[a] > itemCounts[b] || (itemCounts[a] == itemCounts[b] && find(items.begin(), items.end(), a) < find(items.begin(), items.end(), b));
    });

    // Remove duplicates while maintaining order
    vector<string> result;
    for (const auto& item : sorted_items) {
        if (find(result.begin(), result.end(), item) == result.end()) {
            result.push_back(item);
        }
    }

    return result;
}

int main(){

    vector<string> input;

    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        input.push_back(s);
        
    }

    vector<string> output = solve(input);

    for(int i=0;i<output.size();i++){
        cout<<output[i]<<" "<<endl;
    }

=======
int main(){

    int x;
    cin>>x;
    cout<<x<<endl;
>>>>>>> b099ef1e0b4eff8e4050d54824a3ed1de50c8eda

    return 0;
}