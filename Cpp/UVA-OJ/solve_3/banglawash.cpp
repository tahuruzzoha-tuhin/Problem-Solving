#include<iostream>
#include<string>

using namespace std;
int main()
{
    int t, n, lenB, lenW, lenA, lenT;
    string s;
    cin >> t;
    for(int i=1; i<=t; ++i){
        n = 0, lenB=0, lenW=0, lenA=0, lenT=0;
        cin >> n;
        for(int k=0; k<n; ++k){
            cin >> s[k];
            if(s[k]=='B') lenB++;
            if(s[k]=='W') lenW++;
            if(s[k]=='A') lenA++;
            if(s[k]=='T') lenT++;
        }
        if(lenA == n) cout << "Case "<< i << ": ABANDONED" << endl; 
        else if(lenB == n) cout << "Case "<< i << ": BANGLAWASH" << endl;
        else if(lenW == n) cout << "Case "<< i << ": WHITEWASH" << endl;
        else if(lenB != n && lenB > lenW ) cout << "Case "<< i << ": BANGLAWASH " << lenB << "-" << lenW <<endl;
        else if(lenW != n && lenW > lenB ) cout << "Case "<< i << ": WWW " << lenW << "-" << lenB <<endl;
        else if(lenB == lenW ) cout << "Case "<< i << ": DRAW " << lenB << " " << lenW <<endl;
         
       }
       return 0;
}