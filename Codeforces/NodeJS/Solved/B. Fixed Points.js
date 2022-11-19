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

let n = 0, m = 0, out = 0;
let array1 = [];
let array2 = [];
let a = [], b = [];
input.on('line', (line) => {
    array1.push(line.split(" "));
    a = array1[0].map(x => parseInt(x));
    let p = a[0];
    n++;
    if (n > 0) {
        input.on('line', (arr) => {
            array2.push(arr.split(" "));
            b = array2[m].map(x => parseInt(x));
            m++;
            out = solution(p, b);
            console.log(out);
            input.close();
        });
    }

})


function solution(p, b) {
    let n = p;
    let a = b;
    let v = 0, t = 0;
    for (let i = 0; i < n; i++) {
        if (a[i] == i) v++;
        else if (a[a[i]] == i) t++;
    }
    if (v == n) return v;
    else if (t >= 1) return v + 2;
    else return v + 1;
}
