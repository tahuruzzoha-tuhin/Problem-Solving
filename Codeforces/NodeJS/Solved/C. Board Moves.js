

// while (t--) {
//     cin >> n;
//     n /= 2;
//     a = (n * (n + 1) * (2 * n + 1)) / 6;
//     cout << a * 8 << endl;
// }


const readline = require('readline');

const input = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

let array1 = [], h = [];
let q = 0n, n = 0n, p = 0n;
input.on('line', (line) => {

    array1.push(line.split(" "));
    p = BigInt(array1[0][0]);
    q = array1[n].map(x => BigInt(x));
    n++;

    for (const x of q) {
        h.push(BigInt(x));
    }
    if (n > p) {
        h.splice(0, 1);
        let n = 0n, a = 0n;
        for (const i of h) {
            n = i;
            n = (n / 2n);
            a = (n * (n + 1n) * (2n * n + 1n)) / 6n;
            console.log(a * 8);
        }
        input.close();
    }

})
