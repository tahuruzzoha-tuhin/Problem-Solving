

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

    let result = q[0];
    for (let i = 0; i < q[0]; i++) {
        console.log(result);
        result++;
    }
    if (n > 0) {
        input.close();
    }

});