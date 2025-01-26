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

    let (p, q): (LL, LL) = (input(), input());

    if p == 0 {
        println!("1");
    } else {
        println!("{}", 2*q+p+1);
    }
}