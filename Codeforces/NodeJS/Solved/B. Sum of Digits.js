/****************************************************************\
                   BISMILLAHIR RAHMANIR RAHIM
****************************************************************
              AUTHOR NAME: MD. TAHURUZZOHA TUHIN
\****************************************************************/


// const readline = require('readline');

// const IN = readline.createInterface({
//     input: process.stdin,
//     output: process.stdout
// });
process.stdin.on('data', c => {
    let n = +c;
    let result = sumDigits(n);
    console.log(result);
    process.exit();
});
let i = 0;
function sumDigits(num) {
    let rem = 0, n = num;
    while (n) {
        rem += n % 10;
        n = parseInt(n / 10);
        if (rem < 10 & n == 0)
            break;
        i++;
    }
    return i;

}