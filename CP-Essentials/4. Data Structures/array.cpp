#include<bits/stdc++.h>
using namespace std;

template<class Os, class V> Os& operator<<(Os& os, const V& v) {
    os << "{";
    for (auto i : v) os << ' ' << i;
    return os << " } ";
}

void pointer_func(const int* p, size_t size){
    cout << "Using pointer function with arr.data(): ";
    for(size_t i=0; i<size; i++) {
        cout << p[i] << " ";
    }
    cout << "\n";
}
int main()
{
    array<int, 3> a1{ {1, 2, 3} }; 
    array<int, 3> a2 = {1, 2, 3};  
    array<double, 3> a4{3.0, 1.0, 4.0}; 

    array< string, 2> a3 = {  string("a"), "b" };

    sort(a1.begin(), a1.end());
    reverse_copy(a2.begin(), a2.end(), ostream_iterator<int>( cout, " "));

    cout << '\n';

   for(const auto& s: a3)
        cout << s << ' ';
    cout << '\n';

    // operator[] 
    a1[2] = 34;
    int at1val = a1[2];
    cout << "Using operator arr[]: " << at1val << '\n';

    // at() 
    a2.at(2) = 89;
    int at2val = a2.at(2);
    cout << "Using arr.at(): " << at2val << '\n';

    // front()
    int a1front = a1.front();
    cout << "Using arr.front(): "<< a1front << "\n";
    
    // back()
    int a1back = a1.back();
    cout << "Using arr.back(): "<< a1back << "\n";
    
    // size()
    int a1size = a1.size();
    cout << "Using arr.size(): "<< a1size << "\n";
    
    // empty()
    bool a1empty = a1.empty();
    cout << boolalpha << "Using arr.size(): "<< a1empty << "\n";
    
    // data()
    pointer_func(a1.data(), a1size);
    
    // begin() end()
    cout << "Using lambda with arr.begin() ,arr.end(): ";
    for_each(a2.begin(), a2.end(), [](int x){
        cout << x << ' ';
    });
    cout << '\n';
    
    // cbegin() cend()
    cout << "Using lambda with arr.cbegin() ,arr.cend(): ";
    for_each(a2.cbegin(), a2.cend(), [](int x){
        cout << x << ' ';
    });
    cout << '\n';
    
    // rbegin() rend()
    cout << "Using lambda with arr.rbegin() ,arr.rend(): ";
    for_each(a2.rbegin(), a2.rend(), [](int x){
        cout << x << ' ';
    });
    cout << '\n';
    
    // crbegin() crend()
    cout << "Using lambda with arr.crbegin() ,arr.crend(): ";
    for_each(a2.crbegin(), a2.crend(), [](int x){
        cout << x << ' ';
    });
    cout << '\n';

    // array<std::string_view, 8> data = {"▁","▂","▃","▄","▅","▆","▇","█"};
    // auto print = [](const std::string a3) { std::cout << a3 << ' '; };
    // std::for_each(data.cbegin(), data.cend(), print);

    // auto it1 = a1.begin();
    // auto it2 = a2.begin();
    
    cout << "Before using arr1.swap(arr2): " << a1 << a2 << '\n';
    a1.swap(a2);
    cout << "After using arr1.swap(arr2): " << a1 << a2 << '\n' << '\n';

    array<int, 3> alice{1, 2, 3};
    array<int, 3> bob{7, 8, 9};
 
    auto print = [](const int& n) { cout << ' ' << n; };
 
    // Print state before swap
    cout << "alice:";
    for_each(alice.begin(), alice.end(), print);
    cout << "\n" "bob  :";
    for_each(bob.begin(), bob.end(), print);
    cout << '\n';
 
    cout << "-- SWAP\n";
    swap(alice, bob);
 
    // Print state after swap
    cout << "alice:";
    for_each(alice.begin(), alice.end(), print);
    cout << "\n" "bob  :";
    for_each(bob.begin(), bob.end(), print);
    cout << '\n';

}