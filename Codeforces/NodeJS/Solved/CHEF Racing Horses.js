
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


function main() {
    const x = input();
    let d = [], p, y = 0;
    y = input();
    d = input().split(" ").map(x => parseInt(x));
    d.sort((a, b) => a - b);
    p = Math.abs(d[0] - d[1]);


    console.log(p);
}



