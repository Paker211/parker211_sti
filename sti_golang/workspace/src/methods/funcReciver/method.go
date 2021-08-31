package main

import(
  "fmt"
)

type Person struct {
  name string
  age int
}

func (p Person) getInfo() string {
  return p.name
}

func main() {
  p := Person{
    name: "John",
    age:32,
  }
  fmt.Println( p.getInfo() )
}


