/****************************************************************\
                   BISMILLAHIR RAHMANIR RAHIM
****************************************************************
               AUTHOR NAME: MD. TAHURUZZOHA TUHIN
\****************************************************************/


#![allow(unused)]
#[warn(dead_code)]

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
    for _ in 0..test{
        accepted();
    }
}

fn accepted(){

    let n = input();
    let mut a = (0..n).map(|_| input()).collect::<Vec<LL>>();

    a.sort();
    if n==1 && a[n-1]==1 {
        println!("YES");
    } else if n==1 && a[n-1] > 1 {
        println!("NO");
    } else if a[n-1] - a[n-2] > 1 {
        println!("NO");
    } else {
        println!("YES");
    }
 
}