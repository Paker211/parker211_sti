package main

import(
  "fmt"
)

type addOpts struct {
  x int
  y int
  z int
}

func add(opts addOpts) int {
  return opts.x + opts.y + opts.z
}

func main() {

  result := add(addOpts{
    x: 10,
    y: 4,
  })

  newResult := add(addOpts{
    x: 10,
    y: 5,
    z: 6,
  })

  fmt.Println("result", result)
  fmt.Println("newResult", newResult)

}
