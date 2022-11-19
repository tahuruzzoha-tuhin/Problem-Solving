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
        let n = q[0], x = q[1], y = q[2];
        let squareCut = main(n, x, y);
        console.log(squareCut);
        input.close();
    }

})

function main(n, x, y) {
    let a = parseInt(n / 2);
    if ((x == a || x == a + 1) && (y == a || y == a + 1))
        return "NO";
    else
        return "YES";
}

