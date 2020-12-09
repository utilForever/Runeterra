pub fn add(x: i32, y: i32) -> i32 {
    x + y
}

#[cfg(test)]
mod test {
    #[test]
    fn test_add() {
        use super::*;
        assert_eq!(add(3, 4), 7);
    }
}
