const readline = require('readline');

const input = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});
let matrix = [];
let value = [];
let cbr = 0;
let nbr = 0;
const h = 1000000000;
input.on('line', (line) => {

    matrix.push(line.split(' '));
    let a = matrix[nbr].map(x => parseInt(x));
    nbr++;
    if (nbr > 0) {
        input.on('line', (line) => {
            value.push(line.split(' '));
            let b = value[cbr].map(x => parseInt(x));
            cbr++;

            if (cbr > 0) {
                input.close();
            }

            b.sort(function (x, y) {
                return x - y;
            });


            if (a[1] == 0) {

                if (b[0] == 1) {
                    console.log("-1");
                } else {
                    console.log(b[0] - 1);
                }
                return 0;
            }

            if (b[a[1]] == b[a[1] - 1]) {
                console.log("-1");
            }

            else {
                if ((b[a[1] - 1] + 1 != b[a[1]]) && (b[a[1] - 1] < h)) {
                    console.log(b[a[1] - 1] + 1);
                }
                else {
                    console.log(b[a[1] - 1]);
                }
            }

        })

    }

});


