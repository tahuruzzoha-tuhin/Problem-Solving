/****************************************************************\
                   BISMILLAHIR RAHMANIR RAHIM
****************************************************************
               AUTHOR NAME: MD. TAHURUZZOHA TUHIN
\****************************************************************/

#![allow(unused)]
#[warn(dead_code)]

use std::io;

fn accepted() {
    let mut input = String::new();
    io::stdin().read_line(&mut input).unwrap();
    let n: i32 = input.trim().parse().unwrap();

    let mut xs = Vec::new();
    let mut ys = Vec::new();
    for _i in 0..n {
        let mut input = String::new();
        io::stdin().read_line(&mut input).unwrap();
        let nums: Vec<i32> = input
            .trim()
            .split_whitespace()
            .map(|num| num.parse().unwrap())
            .collect();
        xs.push(nums[0]);
        ys.push(nums[1]);
    }

    let mut r = 0;
    for x in &xs {
        for y in &ys {
            if x == y {
                r += 1;
            }
        }
    }
    println!("{}", r);
}

fn main() {
    let test_kase = 1;
    for _i in 0..test_kase {
        accepted();
    }
}
