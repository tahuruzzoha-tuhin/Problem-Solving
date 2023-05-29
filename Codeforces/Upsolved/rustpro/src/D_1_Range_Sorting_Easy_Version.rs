// /****************************************************************\
//                    BISMILLAHIR RAHMANIR RAHIM
// ****************************************************************
//                AUTHOR NAME: MD. TAHURUZZOHA TUHIN
// \****************************************************************/


#![allow(unused)]
#[warn(dead_code)]
#[warn(unused_comparisons)]

use std::io;
use std::cmp; 
use std::str::FromStr;
use std::collections::HashSet;

type LL = i64;
type UL = u64;
type US = usize;


fn input<T: FromStr>() -> T
{
    static mut BUFFER: Vec<String> = vec![];
    loop {
        if let Some(props) = unsafe { BUFFER.pop() } {
            return props.parse().ok().unwrap();
        }
        let mut input = String::new();
        io::stdin().read_line(&mut input).ok();
        unsafe { BUFFER = input.split_whitespace().rev().map(String::from).collect(); }
    }
}

fn main()
{
    let test: LL = input();
    // let test: LL = 1;
    for _ in 0..test{
        accepted();
    }
}

fn accepted(){

    let n = input();
    let mut a = (0..n).map(|_| input()).collect::<Vec<LL>>();

    let mut res = 0;
    for i in 0..n {
        let mut ans = 0;
        let mut stk = vec![];
        for j in i..n {
            let mut start = j;
            let mut mx = a[j];
            while let Some((x, y, z)) = stk.last() {
                if a[j] < *y {
                    mx = mx.max(*y);
                    ans -= z;
                    start = *x;
                    stk.pop();
                } else {
                    break;
                }
            }
            ans += j - start;
            res += ans;
            stk.push((start, mx, j - start));
        }
    }

    println!("{}", res);
}
