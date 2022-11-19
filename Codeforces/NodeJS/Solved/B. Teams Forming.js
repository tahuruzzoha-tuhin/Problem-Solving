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
    if (n > 1) {
        array2.push(line.split(" "));
        b = array2[m].map(x => parseInt(x));
        m++;
        out = solution(p, b);
        console.log(out);
        input.close();
    }

})

function solution(n, teams) {
    let res = 0;
    teams.sort((a, b) => a - b);
    for (let i = 0; i < n - 1; i = i + 2) {
        res = res + (teams[i + 1] - teams[i]);
    }
    return res;
}
