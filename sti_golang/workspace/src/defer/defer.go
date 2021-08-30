package main

import "fmt"

func c() (i int) {
  defer func() { i++ }()
  return 1
}

func main() {
  language := "Go"
  defer fmt.Print( " to " + language + "\n" )

  language = "Node.js"
  defer fmt.Print("from " + language )
  fmt.Print("Hello ")

  fmt.Println( c() )

}
