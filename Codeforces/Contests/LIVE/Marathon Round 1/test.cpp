// #include <iostream>
// #include <string>

// std::string input() {
//     std::string line;
//     std::getline(std::cin, line);
//     return std::move(line);
// }

// int main() {
//     std::string text = input();
//     std::cout << text << std::endl;
//     return 0;
// }



/*######## METHODS  ##########*/
// ll get1() {
//     std::string userInput;
//     std::getline(cin, userInput);
//     std::stringstream line(userInput);
//     ll result1;
//     line >> result1;
//     return result1;
// }

// vll get2() {
//     std::string userInput;
//     std::getline(cin, userInput);
//     std::stringstream line(userInput);
//     ll result1, result2;
//     line >> result1 >> result2;
//     vll v; v.pb(result1); v.pb(result2);
//     return v;
// }

// void vout(vll vec) {
//     std::copy(vec.begin(), vec.end(), std::ostream_iterator<ll>(std::cout, " "));
//     std::cout << "\n";
// }
// void vin(vec) {
//     std::vector<ll> vec {std::istream_iterator<ll>(std::cin), std::istream_iterator<ll>()};
// }


// #include <iostream>
// #include <string>

// std::string input() {
//     std::string line;
//     std::getline(std::cin, line);
//     return line;
// }

// int main() {
//     std::cout << "Enter some text: ";
//     std::string text = input();

//     // Find the first integer in the input string
//     size_t pos = text.find_first_of("0123456789");
//     if (pos != std::string::npos) {
//         int n = std::stoi(text.substr(pos));
//         std::cout << "You entered the integer: " << n << std::endl;
//     } else {
//         std::cout << "No integer found in the input." << std::endl;
//     }

//     return 0;
// }

#include <bits/stdc++.h>

using namespace std;

#define TLE                                 cerr<<"Time Elapsed "<<(double)clock()/CLOCKS_PER_SEC <<" s"<<endl;

int main() {
    std::vector<int> numbers = {1, 3, 5, 7, 9};

    int target = 9;

    if (std::binary_search(numbers.begin(), numbers.end(), target)) {
        std::cout << "Found " << target << " in the vector!" << std::endl;
    } else {
        std::cout << "Could not find " << target << " in the vector." << std::endl;
    }
    TLE;
    return 0;
}
