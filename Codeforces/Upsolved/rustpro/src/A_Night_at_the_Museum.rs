/****************************************************************\
                   BISMILLAHIR RAHMANIR RAHIM
****************************************************************
               AUTHOR NAME: MD. TAHURUZZOHA TUHIN
\****************************************************************/
#![allow(unused)]

use std::io::{self, BufRead};

type LL = i64;

fn read_line() -> String {
    let stdin = io::stdin();
    let line = stdin.lock().lines().next().unwrap().unwrap();
    line.trim().to_string()
}


fn accepted() {
    let mut n: LL = 0;
    let mut m: LL = 0;
    let mut p: LL = 0;
    let mut st = "".to_string();
    st = read_line();
    let mut c: u8 = 97;
    for i in 0..st.len() {
        let m = (c as i64 - st.as_bytes()[i] as i64).abs();
        p += std::cmp::min(m, (26 - m) as i64);
        c = st.as_bytes()[i];
    }
    println!("{}", p);
}

fn main() {
    let test_kase = 1;
    for _ in 0..test_kase {
        accepted();
    }
}
