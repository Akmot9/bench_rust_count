use std::time::Instant;

fn main() {
    let start = Instant::now();
    for _ in 0..=1_000_000 {}
    let duration = start.elapsed();
    println!("Time elapsed in counting to 1,000,000 is: {:?}", duration);
}
