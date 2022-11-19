
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

    let n, a = [], p = 0;
    n = input();
    a = input().split(" ").map(x => parseInt(x));
    a.sort();
    console.log(n,a);
    for (let i = 0, j = 1; i < n; i++) {
        if (a[i] == j) {
            j++;
            continue;
        } else {
            p = j;
        }
    }
    console.log(p);

}