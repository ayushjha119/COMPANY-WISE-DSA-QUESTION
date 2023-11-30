#include <iostream>
#include <vector>

using namespace std;

vector<int> findIdealDays(const vector<int>& days, int k) {
    vector<int> idealDays;
    int n = days.size();
    
    for(int i = k; i < n - k; i++) {
        bool isIdeal = false;
        
        // Check if the rainfall is non-increasing for k prior days
        for(int j = i - k; j < i; j++) {
            if(days[j] >= days[j + 1]) {
                isIdeal = true;
                break;
            }
        }
        
        // Check if the rainfall is non-decreasing for k days after
        if(isIdeal) {
            for(int j = i; j < i + k; j++) {
                if(days[j] <= days[j + 1]) {
                    isIdeal = true;
                    break;
                }
            }
        }
        
        if(isIdeal) {
            idealDays.push_back(i);
        }
    }
    
    return idealDays;
}

int main() {
    vector<int> days;
    int n;
    cin>>n;
    int k = 2;
    cin>>k;

    for(int i = 0;i<n;i++){
        int x;
        cin>>x;
        days.push_back(x);
    }
    
    vector<int> idealDays = findIdealDays(days, k);
    
    cout << "Ideal days are: ";
    for(int i : idealDays) {
        cout << i << " ";
    }
    cout << endl;
    
    return 0;
}
