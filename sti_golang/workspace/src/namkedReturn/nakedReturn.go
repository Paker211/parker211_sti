package main

import(
  "fmt"
)

func swap(x, y string) (a, b string) {
  a = y
  b = x
  return
}

func main() {
  s1, s2 := swap("hello", "world")
  fmt.Println(s1, s2)
}

