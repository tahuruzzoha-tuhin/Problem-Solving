/****************************************************************\
                   BISMILLAHIR RAHMANIR RAHIM
****************************************************************
               AUTHOR NAME: MD. TAHURUZZOHA TUHIN
\****************************************************************/


process.stdin.on('data', c => {
    let n = +c;
    let result = n;
    for (let i = n - 1, j = 1; i; i--, j++) {
        result += i + j * (i - 1);
    }
    console.log(result);
    process.exit();
});



