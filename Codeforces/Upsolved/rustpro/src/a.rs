use std::io::{self, BufRead};

const SZ: usize = 1006;

#[derive(Clone)]
struct Node {
    edges: Vec<usize>,
}

impl Node {
    fn new() -> Self {
        Self { edges: Vec::new() }
    }
}

fn dfs(node: usize, parent: usize, adj: &[Node]) -> i32 {
    let y1 = adj[node].edges.len() as i32 - 1;
    for &u in &adj[node].edges {
        if u == parent {
            continue;
        }
        if adj[u].edges.len() > 1 {
            return -1;
        }
    }
    y1
}

fn main() {
    let stdin = io::stdin();
    let mut lines = stdin.lock().lines().map(Result::unwrap);
    let t: usize = lines.next().unwrap().parse().unwrap();
    let mut adj = vec![Node::new(); SZ];
    for _ in 0..t {
        let nm: Vec<usize> = lines
            .next()
            .unwrap()
            .split_whitespace()
            .map(|x| x.parse().unwrap())
            .collect();
        let n = nm[0];
        let m = nm[1];
        for _ in 0..m {
            let uv: Vec<usize> = lines
                .next()
                .unwrap()
                .split_whitespace()
                .map(|x| x.parse().unwrap())
                .collect();
            let u = uv[0];
            let v = uv[1];
            adj[u].edges.push(v);
            adj[v].edges.push(u);
        }
        let mut x = -1;
        let mut y = -1;
        for i in 1..=n {
            let x1 = adj[i].edges.len();
            if x1 <= 1 {
                continue;
            }
            let y1 = dfs(adj[i].edges[0], i, &adj);
            if y1 == -1 {
                continue;
            }
            let mut pos = true;
            for &j in &adj[i].edges[1..] {
                let j1 = dfs(j, i, &adj);
                if j1 != y1 {
                    pos = false;
                    break;
                }
            }
            if pos {
                x = x1 as i32;
                y = y1;
                break;
            }
        }
        println!("{} {}", x, y);
        adj.iter_mut().for_each(|node| node.edges.clear());
    }
}
