/****************************************************************\
                   BISMILLAHIR RAHMANIR RAHIM
****************************************************************
              AUTHOR NAME: MD. TAHURUZZOHA TUHIN
\****************************************************************/

const readline = require('readline');

const IN = readline.createInterface({
    input: process.stdin,
    output: process.stdout,
});

let n = [], m = [];
let i = 0, j = 0;
IN.on('line', (z) => {
    n.push(z.split(' '));
    n = n[i].map((x) => parseInt(x));
    for (const x of n) {
        m.push(x);
    }
    i++;
    if (i > 0) {
        let n = m[0], a = m[1], b = m[2];
        let mx = Math.max(a + 1, n - b);
        let sub = n - mx + 1;
        console.log(Math.abs(sub));
        IN.close();
    }
})