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

let i = 0, j = 0;
let array1 = [];
let array2 = [];
input.on('line', (line) => {
    array1.push(line.split(' '));
    let n = array1[i].map(x => parseInt(x));
    n = n[i];
    i++;

    let c1 = 0, c2 = 0, c = 0, s = 0, f = 1;
    if (i > 0) {
        input.on('line', (line) => {
            array2.push(line.split(' '));
            let a = array2[j].map(x => parseInt(x));
            j++;
            if (j > 0) input.close();

            for (const x of a) {
                if (x) c++;
                else {
                    c = 0;
                    f = 0;
                }
                if (f) c1 = c;
                s = Math.max(c, s);
                c2 = c;
            }

            console.log(Math.max(c2 + c1, s));


        })
    }
})