// /****************************************************************\
//                    BISMILLAHIR RAHMANIR RAHIM
// ****************************************************************
//                AUTHOR NAME: MD. TAHURUZZOHA TUHIN
// \****************************************************************/


#![allow(unused)]
#[warn(dead_code)]

// use std::io;
use std::cmp;
use std::str::FromStr;
use std::collections::HashSet; 
use std::io::{self, Read};
use std::collections::HashMap;

type LL = i64;
type UL = u64;
type US = usize;


// fn input<T: FromStr>() -> T
// {
//     static mut BUFFER: Vec<String> = vec![];
//     loop {
//         if let Some(props) = unsafe { BUFFER.pop() } {
//             return props.parse().ok().unwrap();
//         }
//         let mut input = String::new();
//         io::stdin().read_line(&mut input).ok();
//         unsafe { BUFFER = input.split_whitespace().rev().map(String::from).collect(); }
//     }
// }

// fn main()
// {
//     let mut test: LL = 1;
//     let mut test: LL = input();
//     for _ in 0..test{
//         accepted();
//     }
// }

// fn accepted(){

//     let n = input();
//     let mut xs = (0..n).map(|_| input()).collect::<Vec<LL>>();
//     let mut ys = (0..n).map(|_| input()).collect::<Vec<LL>>();

//     xs.sort();
//     let mut ys_sorted = ys.clone();
//     ys_sorted.sort();

//     for i in 0..n {
//         let idx = match ys_sorted.binary_search(&(xs[i]-1)) {
//             Ok(idx) => idx,
//             Err(idx) if idx < ys_sorted.len() => idx,
//             _ => panic!("Should not happen"),
//         };
//         xs[i] = idx as i64;
//     }

//     let mut ans: i64 = 1;
//     let modulo: i64 = 1000000007;

//     for i in 0..n {
//         ans *= (xs[i] - (i as i64));
//         if ans <= 0 {
//             ans = 0;
//         }
//         ans %= modulo;
//     }

//     println!("{}", ans);
// }


const MAXN: usize = 105;
const MOD: usize = 1_000_000_007;

fn main() {
    let mut buffer = String::new();
    io::stdin().read_to_string(&mut buffer).unwrap();

    let mut input_iter = buffer.split_whitespace();

    let t: usize = input_iter.next().unwrap().parse().unwrap();

    for _ in 0..t {
        let n: usize = input_iter.next().unwrap().parse().unwrap();
        let mut a: Vec<i64> = Vec::with_capacity(n);
        let mut b: Vec<i64> = Vec::with_capacity(n);
        for _ in 0..n {
            let x: i64 = input_iter.next().unwrap().parse().unwrap();
            a.push(x);
        }
        for _ in 0..n {
            let x: i64 = input_iter.next().unwrap().parse().unwrap();
            b.push(x);
        }
        a.sort();
        b.sort();
        a.reverse();
        b.reverse();
        let mut j: usize = 0;
        let mut ans: usize = 1;
        for i in 0..n {
            while j < n && a[i] <= b[j] {
                j += 1;
            }
            ans = (ans % MOD * (i-j+1)) % MOD;
        }
        println!("{}", ans);
    }
}
