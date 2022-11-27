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

let array1 = [], h = [];
let q = 0, n = 0;
input.on('line', (line) => {

    array1.push(line.split(" "));
    p = Number(array1[0][0]);
    q = array1[n].map(x => parseInt(x));
    n++;

    for (const x of q) {
        h.push(x);
    }
    if (n > p) {
        h.splice(0, 1)
        let y = 0;
        for (const x of h) {
            y = main(x);
            console.log(y);
        }
        input.close();
    }

})

function main(q) {

    let n = q, p = 1, s = 0;
    s = parseInt(n * (n + 1) / 2);
    while (p <= n) {
        s = s - p * 2;
        p = p * 2;
    }
    return s;
}




