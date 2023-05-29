// /****************************************************************\
//                    BISMILLAHIR RAHMANIR RAHIM
// ****************************************************************
//                AUTHOR NAME: MD. TAHURUZZOHA TUHIN
// \****************************************************************/


#![allow(unused)]
#[warn(dead_code)]

// use std::io;
// use std::cmp;
// use std::str::FromStr; 
// use std::collections::HashSet;

// type LL = i64;
// type UL = u64;
// type US = usize;


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
//     let test: LL = input();
//     // let test: LL = 1;
//     for _ in 0..test{
//         accepted();
//     }
// }

// fn accepted(){

//     let n = input();
//     // let (p, q): (LL, LL) = (input(), input());
//     // let a = (0..m).map(|_| input()).collect::<Vec<LL>>();

//     // let (n, k):(usize,LL) = (input(), input());
//     // let mut a: Vec<LL> = vec![0; n + 1];
//     // let mut b: Vec<LL> = vec![0; n + 1];

//     let mut vector = Vec::new(); //push
//     let mut my_set = HashSet::new(); //insert

//     for i in 0..n{
//         let value:LL = input();
//         vector.push(value);
//     }

//     println!("{:?}", vector);
// }
use std::io::{stdin, BufRead};
use std::collections::{HashMap};


fn gcd(a: u64, b: u64) -> u64 {
    if b == 0 {
        return a
    } else {
       return gcd(b, a % b)
    }
}

fn main() {
    let stdin = stdin();
    let mut lines = stdin.lock().lines();

    let t: i32 = lines.next().unwrap().unwrap().trim().parse().unwrap();
    for _ in 0..t {
        let n: usize = lines.next().unwrap().unwrap().trim().parse().unwrap();
        let a: Vec<i64> = lines.next().unwrap().unwrap()
            .split_whitespace()
            .map(|x| x.parse().unwrap())
            .collect();

        let mut m1 = HashMap::new();
        for (i, &val) in a.iter().enumerate() {
            m1.insert(val, i+1);
        }

        let mut m2 = HashMap::new();
        for i in 1..=n {
            m2.insert(i, i);
        }

        let mut m3 = HashMap::new();
        for i in 0..n {
            let diff = (m1[&a[i]] as i64 - m2[&(i+1)] as i64).abs();
            *m3.entry(diff).or_insert(0) += 1;
        }

        let mut gc:u64 = 0;
        for (&key, &value) in &m3 {
            if gc == 0 {
                gc = key as u64;
            } else {
                gc = gcd(gc, key as u64);
            }
        }

        println!("{}", gcd);
    }
}
