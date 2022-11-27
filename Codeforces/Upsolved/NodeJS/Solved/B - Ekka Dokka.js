
/****************************************************************\
                   BISMILLAHIR RAHMANIR RAHIM
****************************************************************
               AUTHOR NAME: MD. TAHURUZZOHA TUHIN
\****************************************************************/




'use strict';
process.stdin.resume();
process.stdin.setEncoding('utf-8');

let inputString = '';
let currentLine = 0;

process.stdin.on('data', inputStdin => {
    inputString += inputStdin;
});

process.stdin.on('end', _ => {
    inputString = inputString.trim().split('\n').map(string => {
        return string.trim();
    });

    main();
});

function input() {
    return inputString[currentLine++];
}





function main() {


    let t, i = 0, n, m, w, cake = [];
    t = input();
    while (i < t) {

        n = input();
        if (n % 2 !== 0) console.log(`Case ${i + 1}:`, 'Impossible');
        else {
            for (let j = 2; j < n / 2; j++) {
                if (n % j === 0) {
                    cake.push(n / j);
                    w = j;
                }

            }
            console.log(`Case ${i + 1}:`, Math.min(...cake), w);
        }

        i++;
    }

}