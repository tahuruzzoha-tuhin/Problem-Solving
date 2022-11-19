
/****************************************************************\
                   BISMILLAHIR RAHMANIR RAHIM
****************************************************************
               AUTHOR NAME: MD. TAHURUZZOHA TUHIN
\****************************************************************/




'use strict';


process.stdin.resume();
process.stdin.setEncoding('utf-8');

const readline = require('readline');

const IN = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

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



const P = 5;

function main() {
    let s = input();
    let res = myPow(1, s, P) + myPow(2, s, P) + myPow(3, s, P) + myPow(4, s, P);
    res %= P;

    console.log(res);

}

function powMod(x, n, P) {
    x %= P;
    let res = 1 % P;
    while (n) {
        if ((n & 1)) {
            res = (res * x) % P;
            n--;
        }
        else {
            x = (x * x) % P;
            n >>= 1;
        }
    }
    return res;
}

function myPow(x, s, P) {
    x %= P;
    let res = 1 % P;
    let now = x;
    for (let i = parseInt(s.length) - 1; i >= 0; i--) {
        res = (res * powMod(now, s[i] - '0', P)) % P;
        now = powMod(now, 10, P);
    }
    return res;
}


