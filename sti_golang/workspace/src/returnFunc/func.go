package main

import(
  "fmt"
)

func foo() func() int {
  return func() int {
    return 999
  }
}

func main() {
  bar := foo()

  fmt.Printf("%T\n", bar)
  fmt.Println( bar() )

}
