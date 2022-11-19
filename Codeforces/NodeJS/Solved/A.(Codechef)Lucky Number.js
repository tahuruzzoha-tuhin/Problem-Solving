
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

    let t, a, b, c;
    t = parseInt(input());


    while (t--) {
        [a, b, c] = input().split(" ");
        // console.log(a, b, c);
        if ((a === 7) || (b === 7) || (c === 7)) console.log("YES");
        else console.log("NO");
    }

}