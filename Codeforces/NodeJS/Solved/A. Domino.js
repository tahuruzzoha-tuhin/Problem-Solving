/****************************************************************\
                   BISMILLAHIR RAHMANIR RAHIM
****************************************************************
              AUTHOR NAME: MD. TAHURUZZOHA TUHIN
\****************************************************************/


const readline = require('readline');

const input = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

let n = 0, m = 1, out = 0, k = 0;
let array1 = [];
let array2 = [];
let p = 0, q = 0, s = 0, h = [], r = [];
let a = 0, b = 0, c = 0, x, y;
input.on('line', (line) => {

    let sum = 0;
    array1.push(line.split(" "));
    p = Number(array1[0][0]);
    s = Number(array1[0][1]);
    q = array1[n].map(x => parseInt(x));


    for (let i = 0; i < q.length; i++) {
        const element = q[i];
        h.push(element);
    }

    n++;
    m++;

    if (n > p) {
        h.splice(0, 1);
        // console.log(h);
        for (let i = 0; i < h.length; i += 2) {
            x = h[i], y = h[i + 1];
            a += x;
            b += y;
            if ((x % 2) !== (y % 2)) c++;
        }
        /*
        h.splice(0, 1);
        let out = solution(q);
        console.log(out);
        */
        if (a % 2 === 0 && b % 2 === 0) console.log(0);
        else if (c % 2 === 0 && c > 0) console.log(1);
        else console.log(-1);
        input.close();
    }

})

/*
function solution(h) {

    let [sumUpper, sumLower] = sums(h);
    let counter = 0;
    for (let i = 0; i < h.length; i++) {
        if (sumLower % 2 !== 0 && sumUpper % 2 !== 0) {
            a = [...swap(h[i], h[i + 1])];
            h.shift();
            h.shift();
            h.unshift(a[0], a[1]);
            counter++;
            [sumUpper, sumLower] = sums(h);
        }

        if (sumLower % 2 === 0 && sumUpper % 2 === 0) break;
        if (sumLower % 2 !== 0 || sumUpper % 2 !== 0) counter = -1;
        else solution(h);

    }
    return counter;
}

function sums(h) {
    let sumUpper = 0, sumLower = 0;

    for (let i = 0; i < h.length; i += 2) {
        sumUpper += h[i];
    }
    for (let j = 1; j < h.length; j += 2) {
        sumLower += h[j];
    }
    return [sumUpper, sumLower];
}

function swap(x, y) {
    let tmp = x;
    x = y;
    y = tmp;
    return [x, y];
}

*/