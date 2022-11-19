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

let n = [];
let m = [];
let i = 0, j = 0;
input.on('line', line => {
    n.push(line.split(' ').map(x => parseInt(x)));
    console.log(n);
    // n = n[i].map(x => parseInt(x));
    for (let x of n) {
        m.push(x);
    }
    i++;
    if (i > 1) {
        let p = m.splice(0, 1);
        p = p[0];
        console.log(p);
        console.log(m);
        // let res = fun(p, m);
        // console.log(res);
        input.close();
    }
})

// function fun(p, m) {
//     let sum = 0;
//     for (let x = 1; x <= m.length; x++) {
//         if (m[x - 1] !== 0) {
//             sum += m[x - 1];
//         }
//         j = x;
//         if (x >= 7) x = 0;
//         if (sum >= p) break;

//     }
//     return j;
// }
