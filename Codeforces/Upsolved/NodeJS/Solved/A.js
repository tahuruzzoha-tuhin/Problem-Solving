
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

    let n, m, mx, mn;
    [n, m] = input().split(" ").map(x => parseInt(x));
    if (n === 0 && m === 0) {
        console.log('0 0');
        return;
    }
    if (n === 0) {
        console.log("Impossible");
        return;
    }

    mx = n + m - (m !== 0);
    mn = n + m - Math.min(n, m);

    console.log(mn, mx);

}