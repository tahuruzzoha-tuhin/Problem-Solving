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
let array2 = [];

input.on('line', (line) => {
    array1.push(line.split(" "));
    let a = array1[n].map(x => parseInt(x));
    n++;
    if (n > 0) {

        input.on('line', (line) => {
            array2.push(line.split(' '));
            let b = array2[m].map(x => parseInt(x));
            m++;
            if (m > 0) input.close();

            // console.log(a, b);

            let temp, min = b[0], min2 = b[1], max = b[1], max2 = b[0];

            if (min2 < min) {
                temp = min;
                min = min2;
                min2 = temp;
            }

            if (max2 > max) {
                temp = max;
                max = max2;
                max2 = temp;
            }

            for (i = 2; i < a; i++) {
                if (b[i] > max) {
                    max2 = max;
                    max = b[i];
                }
                else if (b[i] > max2)
                    max2 = b[i];

                if (b[i] < min) {
                    min2 = min;
                    min = b[i];
                }
                else if (b[i] < min2)
                    min2 = b[i];
            }

            if (max2 - min <= max - min2)
                console.log(max2 - min);

            else console.log(max - min2)
            // console.log(b);

        })

    }

})