/****************************************************************\
                   BISMILLAHIR RAHMANIR RAHIM
****************************************************************
               AUTHOR NAME: MD. TAHURUZZOHA TUHIN
\****************************************************************/


#[allow(dead_code)]
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
        let (m, mut s): (_, i64) = (scan(), scan());
        let a = (0..m).map(|_| scan()).collect::<Vec<i64>>();
        let mx = *a.iter().max().unwrap();
        s -= (1..=mx).sum::<i64>() - a.iter().sum::<i64>();
        for i in mx+1.. {
            
        }
    }
}
