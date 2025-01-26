#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main() {
    unordered_map<char, int> dial_time = {
        {'A', 3}, {'B', 3}, {'C', 3}, 
        {'D', 4}, {'E', 4}, {'F', 4}, 
        {'G', 5}, {'H', 5}, {'I', 5},
        {'J', 6}, {'K', 6}, {'L', 6},
        {'M', 7}, {'N', 7}, {'O', 7},
        {'P', 8}, {'Q', 8}, {'R', 8}, {'S', 8}, 
        {'T', 9}, {'U', 9}, {'V', 9}, 
        {'W', 10}, {'X', 10}, {'Y', 10}, {'Z', 10} 
    };

    string word;
    cin >> word;

    int total_time = 0;
    for (char letter : word) {
        total_time += dial_time[letter];
    }

    cout << total_time << endl;

    return 0;
}
