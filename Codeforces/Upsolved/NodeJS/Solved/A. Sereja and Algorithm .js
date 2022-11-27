
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
    let s = input();
    let n = s.length;
    let x = [], y = [], z = [];
    for (let i = 1; i <= n; i++) {
        if (s[i - 1] === 'x') x[i]++;
        else if (s[i - 1] === 'y') y[i]++;
        else if (s[i - 1] === 'z') z[i]++;
        x[i] += x[i - 1];
        y[i] += y[i - 1];
        z[i] += z[i - 1];
    }
    let l, r, t, x2, y2, z2;
    t = input();

    while (t--) {
        [l, r] = input().split(" ").map(x => parseInt(x));
        x2 = x[r] - x[l - 1];
        y2 = y[r] - y[l - 1];
        z2 = z[r] - z[l - 1];
        n = Math.max(Math.abs(x2 - y2), Math.max(Math.abs(x2 - z2), Math.abs(y2 - z2)));
        if (n > 1 && r - l >= 2) console.log("NO");
        else console.log("YES");
    }

}