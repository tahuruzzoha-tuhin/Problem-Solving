/****************************************************************\
                   BISMILLAHIR RAHMANIR RAHIM
****************************************************************
               AUTHOR NAME: MD. TAHURUZZOHA TUHIN
\****************************************************************/


#![allow(unused)]
#[warn(dead_code)]

fn input<T: std::str::FromStr>() -> T
{
    static mut BUFFER: Vec<String> = vec![];
    loop {
        if let Some(props) = unsafe { BUFFER.pop() } {
            return props.parse().ok().unwrap();
        }
        let mut input = String::new();
        std::io::stdin().read_line(&mut input).ok();
        unsafe { BUFFER = input.split_whitespace().rev().map(String::from).collect(); }
    }
}


fn accepted(){

    let t = input();
    for _ in 0..t{
        let (n, k): (i64, i64) = (input(), input());
        if k == n-1 {
        if n <= 4 {
            println!("-1");
        } else {
            println!("{} {}", n-1, n-2);
            println!("{} {}", n-3, 1);
            println!("2 0");
            for i in 3..n/2 {
                println!("{} {}", i, n-1-i);
            }
        }
    } else {
        for i in 1..n/2 {
            if i == k {
                println!("0 {}", n-1-i);
            } else if n-1-i == k {
                println!("0 {}", i);
            } else {
                println!("{} {}", i, n-1-i);
            }
        }
        println!("{} {}", k, n-1);
    }
}
}

fn main()
{
    // let test: i32 = input();
    let test: i32 = 1;
    for _ in 0..test{
        accepted();
    }
}
