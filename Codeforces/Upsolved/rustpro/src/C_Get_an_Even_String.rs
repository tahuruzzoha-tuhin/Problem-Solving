/****************************************************************\
                   BISMILLAHIR RAHMANIR RAHIM
****************************************************************
               AUTHOR NAME: MD. TAHURUZZOHA TUHIN
\****************************************************************/

#![allow(unused)]
#[warn(dead_code)]

use std::io::{self, BufRead};
use std::collections::HashSet;

type LL = i64;

fn main() {
    let test: LL = input();
    for _ in 0..test {
        accepted();
    }
}

fn accepted() {
    let mut s = String::new();
    io::stdin().read_line(&mut s).unwrap();
    let mut result_string = 0;
    let mut i = 0;
    let mut encountered = [false; 128];
    for (j, c) in s.chars().enumerate() {
        if encountered[c as usize] {
            result_string += j - i;
            while i < j && s.chars().nth(i) != Some(c) {
                encountered[s.chars().nth(i).unwrap() as usize] = false;
                i += 1;
            }
            i += 1;
        } else {
            encountered[c as usize] = true;
        }
    }
    result_string += s.len() - i;
    println!("{}", result_string);
}

fn input<T: std::str::FromStr>() -> T {
    let stdin = io::stdin();
    let l = stdin.lock().lines().next().unwrap().unwrap();
    l.parse().ok().unwrap()
}
