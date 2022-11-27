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

let r = 0, i, j, p, q;
let x, a, b;
let file = [];
let counter = 0;

input.on('line', (line) => {
    file.push(line.split(' '));
    let m = file[counter].map(res => parseInt(res));
    a = m[0];
    b = m[1];
    counter++;
    if (counter > 0)
        input.close();
    if (b == a) {
        console.log("0");
        return 0;
    }

    x = b / a;
    if (x / parseInt(x) != 1) {
        console.log("-1");
        return 0;
    }

    for (i = 0; r == 0; i++) {
        p = Math.pow(3, i);
        if (p == x) {
            r = i;
            break;
        }
        else if (p > x)
            break;
    }

    for (j = i - 1; j >= 0 && r == 0; j--) {
        p = Math.pow(3, j);
        for (i = 1; r == 0; i++) {
            q = Math.pow(2, i);
            if (p * q > x) {
                break;
            }
            else if (p * q == x) {
                r = i + j;
                break;
            }
        }
    }



    if (r == 0)
        r = -1;
    console.log(r);
})

