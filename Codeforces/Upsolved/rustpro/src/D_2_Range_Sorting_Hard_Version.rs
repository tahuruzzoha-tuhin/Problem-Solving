/****************************************************************\
                   BISMILLAHIR RAHMANIR RAHIM
****************************************************************
               AUTHOR NAME: MD. TAHURUZZOHA TUHIN
\****************************************************************/


#![allow(unused)]
#[warn(dead_code)]
#[warn(unused_comparisons)]

use std::io;
use std::cmp::{max,min}; 
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


const N: usize = 300_000;
const N_: usize = 1 << 19;
const INF: i32 = 0x3f3f3f3f;

fn pul(st: &mut [i32], i: usize) {
    let l = i << 1;
    let r = l | 1;
    st[i] = min(st[l], st[r]);
}

fn build(st: &mut [i32], aa: &Vec<i64>, n: usize) {
    let mut n_ = 1;
    while n_ < n {
        n_ <<= 1;
    }
    for i in 0..n_ {
        st[i + n_] = if i < n { aa[i] } else { INF };
    }
    for i in (1..n_).rev() {
        pul(st, i);
    }
}

fn query(st: &Vec<i64>, n: usize, l: usize, r: usize) -> i32 {
    let mut a = INF;
    let mut l = l + n;
    let mut r = r + n;
    while l <= r {
        if l & 1 == 1 {
            a = min(a, st[l]);
            l += 1;
        }
        if r & 1 == 0 {
            a = min(a, st[r]);
            r -= 1;
        }
        l >>= 1;
        r >>= 1;
    }
    a
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
    let mut aa = Vec::<LL>::with_capacity(n);
    for _ in 0..n {
        aa.push(input());
    }
    let mut qu = vec![0; n];
    let mut pp = vec![0; n];
    let mut qq = vec![0; n];
    let mut rr = vec![0; n];
    let mut cnt = 0;
    for i in 0..n {
        while cnt > 0 && aa[qu[cnt - 1]] < aa[i] {
            cnt -= 1;
        }
        if cnt > 0 { 
            pp[i] = qu[cnt - 1]; 
        } else { 
            pp[i] = usize::max_value(); 
        }
        qu[cnt] = i;
        cnt += 1;
    }
    cnt = 0;
    for i in (0..n).rev() {
        while cnt > 0 && aa[qu[cnt - 1]] <= aa[i] {
            cnt -= 1;
        }
        qq[i] = if cnt > 0 { qu[cnt - 1] } else { n };
        qu[cnt] = i;
        cnt += 1;
    }
    let mut st = vec![0; N_ * 2];
    build(&mut st, &aa, n);
    let mut ans = 0i64;
    for i in 0..n {
        ans += (i as i64) * ((i as i64) - ((n - i - 1) as i64));
    }
    for i in 0..n {
        let p = pp[i];
        let q = qq[i];
        if q < n {
            let mut lower = q;
            let mut upper = n;
            while upper - lower > 1 {
                let j = (lower + upper) / 2;
                if query(&st, N_, q, j) >= aa[i] {
                    lower = j;
                } else {
                    upper = j;
                }
            }
            ans -= ((i - p) as i64) * ((lower - q + 1) as i64);
        }
    }
    println!("{}", ans);
}


