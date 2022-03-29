#include<iostream>
using namespace std;
int main()
{

    long  double n,f=1;
    cin >> n;
    for(int i=1; i<=n; i++)
    {
        f*=i;
        cout << "Factorial of "<< i <<" is: " << f << endl;
    }
    f=1;
    for(int j=1; j<=n; j++)
    {
        f*=j;
        cout << j<<"! = " << f << endl;
    }

    return 0;
}


// #include <bits/stdc++.h>

// using namespace std;

// // Assuming 'n' is not below 1
// long long unsigned int stairwayToHeaven(long long unsigned int n){

//     // Initializing ways array
//     long long unsigned int ways[n+1];

//     ways[0] = 1;
//     //ways[1] = 2;

//     for(long long unsigned int i = 1; i <= n; i++ ){
//         ways[i] = ways[i] * ways[i+1];
//     }

//     return ways[n];
// }

// int main(){

//     for (int i = 0; i < 50; i++)
//     {
//         cout << stairwayToHeaven(i) << endl ;
//     }

//    // cout << stairwayToHeaven(1000000) << endl;
    
//     return 0;
// }