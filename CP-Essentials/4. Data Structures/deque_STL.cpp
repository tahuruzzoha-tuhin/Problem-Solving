#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int> dq(10);

    cout << "Size:" << dq.size() << endl;

    for(int i=0; i<10; i++){
        dq[i] = i*i;
    }

    dq.push_back(1223345);
    cout << "Size:" << dq.size() << endl;
    
    for(int i=0; i<dq.size(); i++){
        cout << dq[i] << " ";
    }
    cout << "\n";

    dq.push_front(1223345);
    cout << "Size:" << dq.size() << endl;

    for(int i=0; i<dq.size(); i++){
        cout << dq.at(i) << " ";
    }
    cout << "\n";

    dq.pop_back();
    dq.pop_front();
    dq.pop_front();
    dq.pop_front();

    for(auto x:dq){
        cout << x << ",";
    }



    return 0;
}