#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

bool canCreateColor(const string& s, const string& color) {
    unordered_map<char, int> charCount;
    
    for (char c : s) {
        charCount[c]++;
    }
    
    for (char c : color) {
        if (charCount.find(c) == charCount.end() || charCount[c] == 0) {
            return false;
        }
        charCount[c]--;
    }
    
    return true;
}

int main() {
    int t;
    cin >> t;
    
    // List of colors
    string colors[] = {"blue", "green", "yellow", "red", "purple", "orange", "pink", "grey", "cyan", "brown", "ash", "silver", "gold", "white", "black"};
    
    while (t--) {
        string s;
        cin >> s;
        
        int maxSubsetSize = 0;
        
        for (const string& color : colors) {
            if (canCreateColor(s, color)) {
                maxSubsetSize++;
            } 
        }
        
        cout << maxSubsetSize << endl;
    }
    
    return 0;
}
