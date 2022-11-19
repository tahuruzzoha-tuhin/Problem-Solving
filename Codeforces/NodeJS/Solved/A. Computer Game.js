

// /****************************************************************\
//                    BISMILLAHIR RAHMANIR RAHIM
// ****************************************************************
//                AUTHOR NAME: MD. TAHURUZZOHA TUHIN
// \****************************************************************/



// 'use strict';
// process.stdin.resume();
// process.stdin.setEncoding('utf-8');

// let inputString = '';
// let currentLine = 0;

// process.stdin.on('data', inputStdin => {
//     inputString += inputStdin;
// });

// process.stdin.on('end', _ => {
//     inputString = inputString.trim().split('\n').map(string => {
//         return string.trim();
//     });

//     main();
// });

// function input() {
//     return inputString[currentLine++];
// }

// function main() {

//     let n, m, p, mx = [], mn = [], mp = [], mk = [], mh = [], t;
//     t = input();
//     let a = 0;
//     while (a < t) {
//         a++;
//         n = input();
//         n = parseInt(n);
//         m = input();
//         p = input();

//         for (const x of m) {
//             mx.push(x.toString());
//         }

//         for (const x of p) {
//             mn.push(x.toString());
//         }
//         mp = [mx, mn];
//         for (let i = 0; i < 2; i++) {
//             for (let j = 0; j < n; j++) {
//                 if (mp[i][j] === '0' && i == 0) {
//                     mk.push(i + 1, j + 1);
//                 }
//                 if (mp[i][j] === '0' && i == 1) {
//                     mh.push(i + 1, j + 1);
//                 }
//             }
//         }
//         let mg = [...mk, ...mh];
//         let cnt = 0, pnt = 1;
//         for (let i = 0; i < mg.length / 2; i += 1) {
//             let v1 = Math.abs(mg[i] - mg[i + 2]);
//             if (v1 >= 2) pnt = 0;
//         }

//         if (pnt === 0) {
//             for (let i = 0; i < mk.length; i += 2) {
//                 let v3 = Math.abs(mk[i] - mh[i]);
//                 let v4 = Math.abs(mk[i + 1] - mh[i + 1]);
//                 if (((v3 >= 2 || v4 >= 2))) {
//                     cnt = 0;
//                 } else {
//                     cnt = 1;
//                 }
//             }
//         }
//         console.log((pnt || cnt ? "YES" : "NO"));
//         mk.length = 0;
//         mh.length = 0;
//         mg.length = 0;
//         mp.length = 0;
//         mx.length = 0;
//         mn.length = 0;
//     }

// }





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

    let n, m, p, mx = [], mn = [], t;
    t = input();
    let a = 0;
    while (a < t) {
        a++;
        n = input();
        n = parseInt(n);
        m = input();
        p = input();

        for (const x of m) {
            mx.push(x.toString());
        }

        for (const x of p) {
            mn.push(x.toString());
        }
        let out = "YES"
        for (let i = 0; i < n; i++) {
            if (mx[i] === '1' && mn[i] === '1') {
                out = "NO";
                break;
            }
        }
        console.log(out);
        mx.length = 0;
        mn.length = 0;
        p = 0;
        n = 0;
        m = 0;
    }
}
