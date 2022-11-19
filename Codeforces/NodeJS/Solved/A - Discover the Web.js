
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

    let key, link, t, i = 0, qBack = 1, qFor = 0;
    let stack = ['http://www.lightoj.com/'];
    t = input();
    while (i < t) {

        let qIndex = 0, visitIndex = 1;
        while (key !== 'QUIT') {
            [key, link] = input().split(" ");

            if (key === 'VISIT') {
                if (visitIndex >= 1) {
                    stack[visitIndex] = link;
                } else {
                    stack.push(link);
                }
                console.log(link);
                // qBack = visitIndex;
                visitIndex++;
            }

            else if (key === 'BACK') {
                qBack++;
                let index = stack.length;
                qIndex = index - qBack;

                if (stack[qIndex] == undefined) {
                    qIndex = 0;
                    console.log('ignored');
                } else {
                    console.log(stack[qIndex]);
                }
                console.log('-------------------');

            }
            else if (key === 'FORWARD') {
                qFor++;
                console.log(stack[qIndex + qFor]);
                console.log('-------------------');
            }

            // console.log(stack);
            // console.log(key, link);
        }
        console.log(stack);

        i++;
    }

}