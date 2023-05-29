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
    // let test: LL = 1;
    for _ in 0..test{
        accepted();
    }
}

fn accepted(){

    let n = input();
    // let (p, q): (LL, LL) = (input(), input());
    // let a = (0..m).map(|_| input()).collect::<Vec<LL>>();

    // let (n, k):(usize,LL) = (input(), input());
    // let mut a: Vec<LL> = vec![0; n + 1];
    // let mut b: Vec<LL> = vec![0; n + 1];

    let mut vector = Vec::new(); //push
    let mut my_set = HashSet::new(); //insert

    for i in 0..n{
        let value:LL = input();
        vector.push(value);
    }

    println!("{:?}", vector);
}