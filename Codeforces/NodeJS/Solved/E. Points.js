/****************************************************************\
                   BISMILLAHIR RAHMANIR RAHIM
****************************************************************
              AUTHOR NAME: MD. TAHURUZZOHA TUHIN
\****************************************************************/


const readline = require('readline');

const input = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

let n = 0, m = 1, out = 0, k = 0;
let array1 = [];
let array2 = [];
let p = 0, q = 0, s = 0, h = [], r = [];
let a = 0, b = 0, c = 0, x, y;
input.on('line', (line) => {

    let sum = 0;
    array1.push(line.split(" "));
    p = Number(array1[0][0]);
    q = array1[n].map(x => parseInt(x));


    for (let i = 0; i < q.length; i++) {
        const element = q[i];
        h.push(element);
    }

    n++;
    m++;

    if (n > p) {
        h.splice(0, 1);
        let x, y, n1 = p, distance1 = 0, distance2 = 0, distance3 = 0, distance4 = 0;
        for (let i = 0; i < p; i += 2) {
            x = h[i], y = h[i + 1];
            p++;
            if (h.indexOf(x) === -1 || h.indexOf(y) === -1) break;
            distance1 += x * x;
            distance2 += x;
            distance3 += y * y;
            distance4 += y;

        }
        let a1 = n1 * (distance1 + distance3);
        let a2 = (distance2 * distance2);
        let a3 = (distance4 * distance4);
        let res = a1 - a2 - a3;
        console.log(res);

        input.close();
    }

})

/*

#include<iostream>
#include <bits/stdc++.h>
#include<utility>
#include<algorithm>
#define int long long int
#define mod 1000000007
#define p_b push_back
#define p_f push_front
#define P_f pop_front
#define P_b pop_back
#define m_p make_pair
#define m_t make_tuple
#define len() length()
#define sz() size()
#define ins insert
#define str string
#define bitcount __builtin_popcount
#define all(v) v.begin(),v.end()
#define allr(v) v.rbegin(),v.rend()
#define ld long double
#define db double
#define fio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define F first
#define S second
#define T third
#define endl "\n"
#define done return 0;
#define Fill(a,n,x) fill(a,a+n,x);
// #define fill(a,val) memset(a,val,sizeof(a))
using namespace std;
typedef map<int,int> Map;
typedef pair<int,int> pr;
typedef vector<int> vec;
const int INF = 1e18;
const int MAX = 1e6+1;
int32_t main()
{
    fio;
    int n;
    cin>>n;
    int x,y;
    int sqa=0,sqb=0,suma=0,sumb=0;
    for(int i=0;i<n;i++)
    {
        cin>>x>>y;
        sqa+=x*x;
        sqb+=y*y;
        suma+=x;
        sumb+=y;
    }
    suma*=suma;
    sumb*=sumb;
    int temp;
    temp=suma+sumb-sqa-sqb;
    temp=(n-1)*(sqa+sqb)-temp;
    cout<<temp<<endl;
    done;
}
*/