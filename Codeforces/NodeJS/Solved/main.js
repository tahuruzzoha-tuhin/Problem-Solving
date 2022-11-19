
/****************************************************************\
                   BISMILLAHIR RAHMANIR RAHIM
****************************************************************
               AUTHOR NAME: MD. TAHURUZZOHA TUHIN
\****************************************************************/










/******************************************\
     For multi element in one line input
\******************************************/
// const readline = require('readline');

// const input = readline.createInterface({
//     input: process.stdin,
//     output: process.stdout
// });

// let n = 0, m = 0;
// let array1 = [];
// let array2 = [];
// let a = [], b = [];
// input.on('line', (line) => {
//     array1.push(line.split(" "));
//     a = array1[n].map(x => parseInt(x));
//     let p = a[0];
//     n++;
//     if (n > p) {
//         array2.push(line.split(" "));
//         b = array2[m].map(x => parseInt(x));
//         m++;
//         // console.log(a, b);

//         input.close();
//     }

// })


/****************************\
     For close cli
\****************************/
// const readline = require('readline')
// const rl = readline.createInterface({
//     input: process.stdin,
//     output: process.stdout
// })
// let lineNum = 0, res = 0
// rl.on('line', line => {
//     if (lineNum++ === 0) return
//     const e = line.split(' ')
//     let el = false, num = 0
//     for (let ch of e) {
//         if (ch === '1') num++
//     }
//     if (num > 1) el = true

//     if (el) res++
// })
// rl.on('close', () => {
//     console.log(res)
// })


/****************************\
     For unique element
\****************************/
// uniqueArray = myArray.filter(function(elem, pos) {
//     return myArray.indexOf(elem) == pos;
// })
// **********************************************************
// uniques = array.filter((x, i) => i === array.indexOf(x))
// ************************************************************
// var array = [
//         1029,
//         1008,
//         1040,
//         1019,
//         1030,
//         1009,
//         1041,
//         1020,
//         1031,
//         1010,
//         1042,
//         1021,
//         1030,
//         1008,
//         1045,
//         1019,
//         1032,
//         1009,
//         1049,
//         1022,
//         1031,
//         1010,
//         1042,
//         1021,
//     ];

// var uSet = new Set(array);
// console.log([...uSet]); // Back to array

// **************************************************
// let uniqueItems = [...new Set(items)]




/*******************************\
     For single line input
\*******************************/
// const readline = require('readline');

// const rl = readline.createInterface({
//     input: process.stdin,
//     output: process.stdout
// });
// let matrix = [];
// let nbr = 0;

// rl.on('line', (line) => {
//     matrix.push(line.split(' '));
//     let a = matrix.map(x => parseInt(x));
//     nbr++;

//     // number of lines to read
//     if (nbr > 4)
//         rl.close();
//     console.log(a);

// });




/*******************************\
     For single line input
\*******************************/
// let ar = [];
// let i = 0, j = 0;
// process.stdin.on('data', c => {
//     a = Number(c);
//     ar[i++] = a;
//     // console.log(ar);
//     j = 0;
//     for (const x of ar) {
//         j++;
//     }
//     ar.sort((x, y) => x - y);
//     console.log(ar);
//     console.log(j);
//     if (j >= 5) process.exit();
// });


/*******************************\
     For single line input
\*******************************/
// var t = readline().split(' ').map(Number);
// console.log(t);


/*******************************\
     For single line input
\*******************************/
// const readline = require('readline');

// const rl = readline.createInterface({
//      input: process.stdin,
//      output: process.stdout
// });

// rl.question('', (answer) => {
//      // TODO: Log the answer in a database
//      // console.log(`Thank you for your valuable feedback: ${answer}`);
//      let t = Number(answer);
//      console.log(t);
//      // let ar = [0];
//      // while (t--) {
//      //      rl.question('', i => {
//      //           ar.push(Number(i));
//      //      });
//      // }
//      // console.log(ar);
//      rl.close();
// });



/*******************************\
     For single value input
\*******************************/
// var stdin = process.openStdin();

// stdin.addListener("data", function (d) {
//      // note:  d is an object, and when converted to a string it will
//      // end with a linefeed.  so we (rather crudely) account for that  
//      // with toString() and then trim() 
//      console.log("you entered: [" +
//           d.toString().trim() + "]");
// });


/*******************************\
     For single value input
\*******************************/
// const stdin = process.openStdin();
// let content = '';

// stdin.addListener('data', d => {
//      content = +d;
//      console.log(content);
// });

// stdin.addListener('end', () => {
//      console.info(`Input: ${content}`);
// });



/***********************************\
     FOR MULTILINE TEST CASE INPUT
\***********************************/
// let input = require('readline-sync');
// let ans = +(input.question(''));
// let a = [];
// for (let i = 0; i < ans; i++) {
//      // console.log("Tuhin");
//      a[i] = +(input.question(''));
//      // console.log(a);
// }
// console.log(a);

// const previousMaxSafe = BigInt(Number.MAX_SAFE_INTEGER);
// console.log(previousMaxSafe, Number.MAX_SAFE_INTEGER);

// Int64 = require('node-int64');
// long = new Int64('78');
// console.log(long + 1);

// let arr = [1, 2, 3, 4, 5, 6, 7, 8, 9, 0]
// arr.splice(0, 2)
// //remove 1 element from index 2
// console.log(arr);



/* program to find the HCF or GCD of two integers
*****************************************************
*/

// take input
// let number1 = prompt('Enter a first positive integer: ');
// let number2 = prompt('Enter a second positive integer: ');

// // looping until both numbers are equal
// while(number1 != number2){
//     if(number1 > number2) {
//         number1 -= number2;
//     }
//     else {
//         number2 -= number1;
//     }
// }

// display the hcf
// console.log(`HCF is ${number1}`);


/*******************************\
     For single line input
\*******************************/

// process.stdin.on('data', c => {
//      let n = +c;
//      let result = parseInt(n / 2) + n;
//      console.log(result);
//      process.exit();
// });



/*******************************\
     hacker rank input
\*******************************/
// process.stdin.resume();
// process.stdin.setEncoding('ascii');

// var input_stdin = "";
// var input_stdin_array = "";
// var input_currentline = 0;

// process.stdin.on('data', function (data) {
//      input_stdin += data;
// });

// process.stdin.on('end', function () {
//      input_stdin_array = input_stdin.split("\n");
//      main();
// });

// function readLine() {
//      return input_stdin_array[input_currentline++];
// }

// /////////////// ignore above this line ////////////////////

// function main() {
//      var t = parseInt(readLine());
//      for (var a0 = 0; a0 < t; a0++) {
//           var n = parseInt(readLine());
//           
//      }

// }

// console.log(499999998352516354 + 499999998352516354);
// var rem = BigInt("1738141852226360940").mod("32").valueOf();
// console.log(rem);



// var Long = require("long");

// var longVal = new Long(0xFFFFFFFF, 0x7FFFFFFF);
// p = longVal.toString();
// console.log(longVal.toString());
// console.log(parseInt(p));

// let p = '124356983594583453458888889';
// console.log(p);


// 'use strict';

// process.stdin.resume();
// process.stdin.setEncoding('utf-8');

// let inputString = '';
// let currentLine = 0;

// process.stdin.on('data', inputStdin => {
//      inputString += inputStdin;
// });

// process.stdin.on('end', _ => {
//      inputString = inputString.trim().split('\n').map(string => {
//           return string.trim();
//      });

//      main();
// });

// function readline() {
//      return inputString[currentLine++];
// }
// // Make a Snippet for the code above this and then write your logic in main();


// function main() {
//      const x = readline();
//      let y, d = [];
// let a = input().split(" ").map(x => parseInt(x));
// 
//      for (let i = 0; i < x; i++) {
//           y = readline();
//           d = readline();
//      }

//      // foo(x);
//      // foo(line2);
//      console.log(y, d);
// }
// function foo(x) {
//      process.stdout.write("hello: ");   // without auto '\n' (newline)
//      console.log(x);  // with auto '\n' (newline)
// }





/****************************************************************\
                   BISMILLAHIR RAHMANIR RAHIM
****************************************************************
               AUTHOR NAME: MD. TAHURUZZOHA TUHIN
\****************************************************************/


/*

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
} */