
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

    let t, a, b, n;
    let resA = 0, resB = 0;

    t = input();
    for (let i = 0; i < t; i++) {
        resA = 0;
        resB = 0;
        a = 0;
        b = 0;
        let res = 0, dif = 0, flag = 0;
        [a, b] = input().split(' ').map(x => parseInt(x));

        if (a % 3 === 0) {
            resA = Math.floor(a / 3);
            flag = 1;
        } else {
            resA = Math.floor(a / 3) + 1;
        }

        if (b % 3 === 0) {
            resB = Math.floor(b / 3);
            flag = 1;
        } else {
            resB = Math.floor(b / 3) + 1;
        }
        res = (resB - resA);
        dif = (b - a);
        if (!flag && dif > 3) {
            console.log(`Case ${i + 1}:`, dif - res);
        } else {
            console.log(`Case ${i + 1}:`, dif);
        }

    }
    // console.log(resA);
}