/****************************************************************\
                   BISMILLAHIR RAHMANIR RAHIM
****************************************************************
               AUTHOR NAME: MD. TAHURUZZOHA TUHIN
\****************************************************************/

/*
const readline = require('readline');

const IN = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});
*/

process.stdin.on('data', c => {
    let n = +c;
    let result = parseInt(n / 2) + n;
    console.log(result);
    process.exit();
});