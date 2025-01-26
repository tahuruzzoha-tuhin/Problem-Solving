use std::collections::HashSet;
use std::io::{self};

#[warn(dead_code)]
fn read_int() -> i32 {
    let mut input = String::new();
    io::stdin().read_line(&mut input).expect("Failed to read line");
    input.trim().parse().expect("Failed to parse integer")
}

fn read_ints() -> Vec<i32> {
    let mut input = String::new();
    io::stdin().read_line(&mut input).expect("Failed to read line");
    input.trim()
        .split_whitespace()
        .map(|s| s.parse().expect("Failed to parse integer"))
        .collect()
}

fn main() {
    
    let t = 1;
    
    for _ in 0..t {
        let nm = read_ints();
        let n = nm[0];
        let m = nm[1];
        
        let mut initial = Vec::with_capacity(n as usize);
        let mut final_count = vec![0; (n + 1) as usize];
        
        for _ in 0..n {
            let ask = read_int();
            initial.push(ask);
            
            if ask < 0 {
                final_count[(-ask) as usize] -= 1;
            } else {
                final_count[ask as usize] += 1;
            }
        }
        
        let data_object: HashSet<i32> = (1..=n)
            .filter(|&ask| final_count[ask as usize] == m)
            .collect();
        
        if data_object.is_empty() {
            for _ in 0..n {
                println!("Not defined");
            }
        } else if data_object.len() == 1 {
            let ask = *data_object.iter().next().unwrap();
            for i in &initial {
                if *i == ask || (*i < 0 && *i + ask == 0) {
                    println!("Truth");
                } else {
                    println!("Lie");
                }
            }
        } else {
            for i in &initial {
                if data_object.contains(&i.abs()) {
                    println!("Not defined");
                } else {
                    if *i < 0 {
                        println!("Truth");
                    } else {
                        println!("Lie");
                    }
                }
            }
        }
    }
}
