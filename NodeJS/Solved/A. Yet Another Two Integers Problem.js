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

let n = 0, m = 0;
let array1 = [];
let p = 0, q = 0, h = [];
let x, y;

input.on('line', (line) => {

    array1.push(line.split(" "));
    p = Number(array1[0][0]);
    q = array1[n].map(x => parseInt(x));


    for (let i = 0; i < q.length; i++) {
        const element = q[i];
        h.push(element);
    }

    n++; m++;

    if (n > p) {
        h.splice(0, 1);

        for (let i = 0; i < p; i += 2) {
            x = h[i], y = h[i + 1];
            p++;

            let res1 = Math.abs(y - x) + 9;
            let res2 = parseInt(res1 / 10);
            console.log(res2);
        }
        input.close();
    }

})
