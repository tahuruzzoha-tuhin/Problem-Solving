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

let array1 = [];
let q = 0, n = 0;
input.on('line', (line) => {

    array1.push(line.split(" "));
    p = Number(array1[0][0]);
    q = array1[n].map(x => parseInt(x));
    n++;

    if (n > 0) {
        let x = q[0], y = q[1];
        let stopProduction = solution(x, y);
        console.log(stopProduction);
        input.close();
    }

})

function solution(p, q) {
    let a = p, m = q;
    a %= m;
    let x = 0;
    while (x < m) {
        a *= 2;
        a %= m;
        if (a == 0) {
            return "Yes";
        }
        x++;
    }
    return "No";
}

