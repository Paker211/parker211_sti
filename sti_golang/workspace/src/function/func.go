package main

import (
  "fmt"
)

func fibonacci() func() int {
  position := 0
  cache := map[int]int{}

  return func() int {
    position++
    fmt.Print( "Postion:", position, " " )
    if position == 1 {
      cache[position] = 0
      return 0
    } else if position <= 3 {
      cache[position] = 1
    } else {
      cache[position] = cache[position-2] + cache[position-1]
    }
    return cache[position]
  }
}


func main() {
  f := fibonacci()
  for i :=0; i < 10; i++ {
    fmt.Println( f(), " " )
  }
  fmt.Println()
}
