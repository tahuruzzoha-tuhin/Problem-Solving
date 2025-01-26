/****************************************************************\
                   BISMILLAHIR RAHMANIR RAHIM
****************************************************************
               AUTHOR NAME: MD. TAHURUZZOHA TUHIN
\****************************************************************/


#![allow(unused)]
#[warn(dead_code)]

use std::io::{self, BufRead};
use std::cmp;
use std::str::FromStr;
use std::collections::HashSet;
use std::sync::{Arc, Mutex};

type LL = i64;


fn input<T: FromStr>() -> T {
    static mut BUFFER: Option<Arc<Mutex<Vec<String>>>> = None;
    let stdin = io::stdin();

    let buffer = unsafe {
        match &mut BUFFER {
            Some(buffer) => Arc::clone(buffer),
            None => {
                let buffer = Arc::new(Mutex::new(Vec::new()));
                BUFFER = Some(Arc::clone(&buffer));
                buffer
            }
        }
    };

    loop {
        if let Some(token) = buffer.lock().unwrap().pop() {
            return token.parse().ok().unwrap();
        }

        let mut line = String::new();
        stdin.lock().read_line(&mut line).unwrap();

        let tokens = line.split_whitespace().rev().map(String::from).collect::<Vec<_>>();
        buffer.lock().unwrap().extend(tokens);
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

// fn accepted(){

//     let n:usize = input();
//     let mut flg = 0;
//     let mut a:[i64;55] = [0; 55];

//     for i in 0..n{
//         let mut x:usize = input();
//         while x > n {
//             x >>= 1;
//         }

//         while a[x] > 0 && x > 0 {
//             x >>= 1;
//         }

//         a[x] += 1;
//     }

//     if a[0] > 0 {
//         println!("NO");
//     } else {
//         println!("YES");
//     }
// }
fn accepted(){
 
    // let (p, q): (LL, LL) = (input(), input());
    // let a = (0..m).map(|_| input()).collect::<Vec<LL>>();
    
    // let (n, k):(usize,LL) = (input(), input());
    // let mut a: Vec<LL> = vec![0; n + 1];
    // let mut b: Vec<LL> = vec![0; n + 1];
    
    // let mut vector = Vec::new(); //push
 
    let n = input();
    let mut flg = 0;
    let mut my_set = HashSet::new(); //insert
 
    for i in 0..n{
        let mut value:LL = input();
        while (value > n) || (my_set.contains(&value)) {
            value /= 2;
        }
        if value == 0 {
            flg = 1;
            break;
        }
        my_set.insert(value);
    }
    if flg==1 {
        println!("NO");
    } else {
        println!("YES");
    }
}