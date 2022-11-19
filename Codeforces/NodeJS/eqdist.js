
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

    let x = 0, y = '', s, p = [], t, q = [];
    s = input();
    t = input();

    for (const x of s) {
        p.push(x);
    }
    for (const x of t) {
        q.push(x);
    }

    for (let i = 0; i < s.length; i++) {
        if (p[i] !== q[i]) {
            x++;
        }
        if (x % 2 === 0) {
            p[i] = q[i];
        }
    }
    for (const x of p) {
        y = y + x;
    }
    if (x & 1) {
        console.log('impossible');
    } else {
        console.log(y);
    }

}