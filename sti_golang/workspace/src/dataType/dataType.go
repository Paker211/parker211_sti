package main

import(
  "fmt"
)


func main() {
  // Type Conversion
  i := 33   // int
  f := float64( i ) // convert int to float64
  u := uint( f )  //convert float64 to uint
  fmt.Println( i, f, u )

}
