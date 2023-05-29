// use std::io;

// fn main() {
//     let mut input = String::new();
//     io::stdin().read_line(&mut input).unwrap();
//     let n: usize = input.trim().parse().unwrap();

//     let mut arr = vec![0; n];
//     let mut input = String::new();
//     io::stdin().read_line(&mut input).unwrap();
//     let nums: Vec<i32> = input
//         .trim()
//         .split_whitespace()
//         .map(|num| num.parse().unwrap())
//         .collect();

//     for i in 0..n {
//         arr[i] = nums[i];
//     }

//     // println!("{:?}", arr);
// }

// #![allow(unused)]
// #[warn(dead_code)]
fn scan<T: std::str::FromStr>() -> T
{
    static mut BUFFER: Vec<String> = vec![];
    loop {
        if let Some(token) = unsafe { BUFFER.pop() } {
            return token.parse().ok().unwrap();
        }
        let mut input = String::new();
        std::io::stdin().read_line(&mut input).ok();
        unsafe { BUFFER = input.split_whitespace().rev().map(String::from).collect(); }
    }
}

fn main()
{
    for _ in 0..scan() {
        let (m,  s): (_, i64) = (scan(), scan());
        let a = (0..m).map(|_| scan()).collect::<Vec<i64>>();
        println!("{:?}", a);
        println!("{} {}", m, s);
    }
}