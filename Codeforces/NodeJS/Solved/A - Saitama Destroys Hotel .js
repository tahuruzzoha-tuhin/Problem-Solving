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
let a = [], b = 0, p = 0, q = 0, s = 0, h = [];
input.on('line', (line) => {

    let sum = 0;
    array1.push(line.split(" "));
    p = Number(array1[0][0]);
    s = Number(array1[0][1]);
    q = array1[n].map(x => parseInt(x));

    for (let i = 0; i < q.length; i++) {
        const element = q[i];
        sum += element;
        h.push(sum);
    }

    n++;
    m++;

    if (n > p) {
        h.splice(0, 2);
        b = Math.max(s, ...h);
        console.log(b);
        input.close();
    }

})

