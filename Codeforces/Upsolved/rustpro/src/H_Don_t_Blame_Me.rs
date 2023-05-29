use std::io::{self, BufRead};

const MOD: i64 = 1_000_000_007;

fn solv() {
    let stdin = io::stdin();
    let mut lines = stdin.lock().lines().map(Result::unwrap);

    let nk: Vec<i64> = lines
        .next()
        .unwrap()
        .split_whitespace()
        .map(|x| x.parse().unwrap())
        .collect();
    let n = nk[0];
    let k = nk[1];

    let arr: Vec<i64> = lines
        .next()
        .unwrap()
        .split_whitespace()
        .map(|x| x.parse().unwrap())
        .collect();

    let mut cur = std::collections::BTreeMap::new();
    let mut cur2 = std::collections::BTreeMap::new();

    let mut l = 0;
    let mut r = 0;
    cur.insert(arr[0], 1);
    cur2.insert(arr[0], 1);

    for i in 1..n {
        for (&j, &cnt) in &cur {
            *cur2.entry(j & arr[i]).or_insert(0) += cnt;
            *cur2.get_mut(&j & arr[i]).unwrap() %= MOD;
        }
        *cur2.entry(arr[i]).or_insert(0) += 1;
        *cur2.get_mut(&arr[i]).unwrap() %= MOD;
        cur = cur2.clone(); // use clone() to copy the map
    }

    let mut ans = 0;
    for (&j, &cnt) in &cur {
        if j.count_ones() == k as u32 {
            ans += cnt;
            ans %= MOD;
        }
    }
    println!("{}", ans);
}

fn main() {
    let stdin = io::stdin();
    let mut lines = stdin.lock().lines().map(Result::unwrap);

    let t: usize = lines.next().unwrap().trim().parse().unwrap();

    for _ in 0..t {
        solv();
    }
}
