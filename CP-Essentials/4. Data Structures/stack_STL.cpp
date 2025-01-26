#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<string> books;

    books.push("Java");
    books.push("C++");
    books.push("Python");
    books.push("Rust");

    while (!books.empty())
    {
        cout << books.top() << endl;;
        books.pop();
    }
    

    return 0;
}