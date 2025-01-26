
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
    let n = input();


}
