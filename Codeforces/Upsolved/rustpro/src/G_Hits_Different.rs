use std::io::{self, BufRead};

fn main() {
    let mut dp = [[0i64; 1510]; 1510];
    let mut fs = [0i64; 1000010];
    let mut cnt = 2usize;
    let mut flg = false;

    let stdin = io::stdin();
    let mut lines = stdin.lock().lines().map(Result::unwrap);

    let t: usize = lines.next().unwrap().trim().parse().unwrap();

    dp[1][1] = 1;
    fs[1] = 1;

    for i in 2..=2023 {
        for j in 1..=i {
            dp[i][j] = dp[i-1][j-1] + dp[i-1][j] - dp[i-2][j-1] + (cnt * cnt);
            fs[cnt] = dp[i][j];
            cnt += 1;
            if cnt == 1000001 {
                flg = true;
                break;
            }
        }
        if flg {
            break;
        }
    }

    for _ in 0..t {
        let x: usize = lines.next().unwrap().trim().parse().unwrap();
        println!("{}", fs[x]);
    }
}
