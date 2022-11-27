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
let q = 0n, n = 0n, p = 0n;
input.on('line', (line) => {

    array1.push(line.split(" "));
    p = BigInt(array1[0][0]);
    q = array1[n].map(x => BigInt(x));
    n++;

    for (const x of q) {
        h.push(BigInt(x));
    }
    if (n > h[1]) {
        h.splice(0, 2);

        let defeated = solution(h);
        console.log(defeated);
        input.close();
    }

})

function solution(h) {
    let x = 0n, y = 0n;
    let f = -1n, mx3 = 10010n, m = [];
    for (let i = 0; i < mx3; i++) {
        m.push(0n);
    }
    for (let i = 0; i < h.length; i += 2) {
        if (h[i] !== undefined && h[i + 1] !== undefined) {
            x = BigInt(h[i]);
            y = BigInt(h[i + 1]);
            m[x] = BigInt(m[x]) + y;
            f = (BigInt(x) > BigInt(f)) ? BigInt(x) : BigInt(f);
        }
    }
    let i = 0n;
    let n = p;
    while (i < mx3) {
        if (n > i) n = BigInt(n) + BigInt(m[i]);
        i = i + 1n;
    }
    return (n > f) ? "YES" : "NO";
}

