/****************************************************************\
                   BISMILLAHIR RAHMANIR RAHIM
****************************************************************
               AUTHOR NAME: MD. TAHURUZZOHA TUHIN
\****************************************************************/

#![allow(unused)]
#[warn(dead_code)]

use std::io;

fn main() {
    let mut input = String::new();
    io::stdin().read_line(&mut input).unwrap();

    let mut arr: Vec<i32> = input.split_whitespace()
                                 .map(|x| x.parse().unwrap())
                                 .collect();
    
    let  ( mut x1, mut y1, mut x2, mut y2) = (arr[0], arr[1], arr[2], arr[3]);

    for _ in 0..2 {
        arr.clear();
        input.clear();
        io::stdin().read_line(&mut input).unwrap();
        arr = input.split_whitespace()
                   .map(|x| x.parse().unwrap())
                   .collect();

        let (x3, y3, x4, y4) = (arr[0], arr[1], arr[2], arr[3]);

        if x3 <= x1 && y3 <= y1 && x4 >= x2 && y4 >= y2 {
            println!("NO");
            return;
        }

        if y4 < y1 || x4 < x1 || y3 > y2 || x3 > x2 {
            continue;
        }

        if x3 <= x1 && y3 <= y1 && x4 >= x2 {
            y1 = y4;
        }
        if x3 <= x1 && y3 <= y1 && y4 >= y2 {
            x1 = x4;
        }
        if x3 <= x1 && y4 >= y2 && x4 >= x2 {
            y2 = y3;
        }
        if y3 <= y1 && y4 >= y2 && x4 >= x2 {
            x2 = x3;
        }
    }

    println!("YES");
}
