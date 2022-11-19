
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

    let n, k;
    [n, k] = input().split(" ").map(x => parseInt(x));

    let a = input().split(" ").map(x => parseInt(x));

    let ans = 0;
    for (let i = 0; i < k; i++) {
        let x = 0, y = 0;
        for (let j = i; j < n; j += k) {
            if (a[j] == 1)
                x++;
            else
                y++;
        }
        ans += Math.min(x, y);
    }

    console.log(ans);
}