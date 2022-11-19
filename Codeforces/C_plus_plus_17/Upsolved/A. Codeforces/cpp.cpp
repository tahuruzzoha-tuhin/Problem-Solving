#include <bits/stdc++.h>

using namespace std;

// Assuming 'n' is not below 1
long long unsigned int stairwayToHeaven(long long unsigned int n){

    // Initializing ways array
    long long unsigned int ways[n+1];

    ways[0] = 1;
    ways[1] = 1;

    for(long long unsigned int i = 2; i <= n; i++ ){
        ways[i] = ways[i-1] + ways[i-2];
    }

    return ways[n];
}

int main(){

    for (int i = 0; i < 50; i++)
    {
        cout << stairwayToHeaven(i) << endl ;
    }

   // cout << stairwayToHeaven(1000000) << endl;
    
    return 0;
}