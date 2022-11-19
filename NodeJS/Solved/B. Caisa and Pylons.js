
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

    let n, x;
    [n] = input().split(" ").map(x => parseInt(x));

    let v = [];
    v = input().split(" ").map(x => parseInt(x));
    v.unshift(0);

    let ans = 0, power = 0;

    for (let i = 0; i < n; ++i) {
        x = v[i] - v[i + 1];
        power += x;

        if (power < 0) {
            ans += power * (-1);
            power = 0;
        }
    }

    console.log(ans);

}