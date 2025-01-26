#include<iostream>
#include<queue>
using namespace std;

class Compare{
    public:
        bool operator()(int a, int b){
            return a <   b;
        }
};

int main(){
    int arr[] = {10, 15, 20, 13, 6, 90};
    // int n = sizeof(arr) / sizeof(int);

    priority_queue<int> pq;

    for(int x: arr){
        pq.push(x);
    }

    while(!pq.empty()){
        cout << pq.top() << endl;
        pq.pop();
    }
    cout << "---------------" << endl;

    // Using in built comparator.
    priority_queue<int, vector<int>, greater<int> > pqc;

    for(int x: arr){
        pqc.push(x);
    }

    while(!pqc.empty()){
        cout << pqc.top() << endl;
        pqc.pop();
    }
    cout << "---------------" << endl;

    // Using in custom comparator.
    priority_queue<int, vector<int>, Compare > pqcC;

    for(int x: arr){
        pqcC.push(x);
    }

    while(!pqcC.empty()){
        cout << pqcC.top() << endl;
        pqcC.pop();
    }
    return 0;
}