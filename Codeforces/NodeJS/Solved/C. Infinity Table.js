/****************************************************************\
                   BISMILLAHIR RAHMANIR RAHIM
****************************************************************
              AUTHOR NAME: MD. TAHURUZZOHA TUHIN
\****************************************************************/



const readline = require('readline');

const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});
let matrix = [];
let nbr = 0;
let cnt = 0;
rl.on('line', (line) => {
    matrix.push(line.split(' '));
    let a = matrix.map(x => parseInt(x));
    nbr++;

    if (nbr > a[0]) {
        for (let i = 1; i <= a[0]; i++) {
            let n = a[i];
            let x = 1;
            let k = 1;
            let r, cc = 0, int;
            if (n == 1) {
                console.log(1, 1);
                continue;
            }
            while (1) {
                cc++;

                if (n >= x && n < x + k) {
                    int = parseInt(k / 2 + x);
                    cnt = int;
                    if (n >= x && n <= cnt) {
                        r = Math.abs(n - x) + 1;
                    }
                    else {
                        int = parseInt(k / 2 + 1);
                        r = int;
                        cc = Math.abs(x + k - n);
                    }

                    console.log(r, cc);
                    break;
                }
                x += k;
                k += 2;
            }
        }




        rl.close();
    }

});