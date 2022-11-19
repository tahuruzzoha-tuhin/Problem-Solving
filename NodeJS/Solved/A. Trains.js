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
        let gcd = GCD(x, y);
        let lcm = (x * y) / gcd;
        let d = lcm / x - 1;
        let m = lcm / y - 1;

        if (d < m) {
            if (d + 1 === m) console.log('Equal');
            else console.log('Masha');
        } else {
            if (d === m + 1) console.log('Equal');
            else console.log('Dasha');
        }
        input.close();
    }

})

function GCD(x, y) {
    let number1 = x;
    let number2 = y;
    while (number1 != number2) {
        if (number1 > number2) {
            number1 -= number2;
        }
        else {
            number2 -= number1;
        }
    }
    return number1;
}