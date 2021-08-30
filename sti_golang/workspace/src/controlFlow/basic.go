// Control flow
package main

import (
  "fmt"
  "runtime"
  "time"
)

var (
  x interface {}
)
func convert( x interface{} ) {
  switch t := x.(type) {
  case int:
    fmt.Printf("%v is integer( %T )\n", t, t )
  case string:
    fmt.Printf("%v is string( %T )\n", t, t )
  case float64:
    fmt.Printf("%v is float64( %T )\n", t, t )
  default:
    fmt.Printf( "type not found." )
  }
}

func main() {

  //-- FOR --------------------------------
  // for
  for i := 0; i < 10; i++ {
    fmt.Print( i, " " )
  }
  fmt.Println()
  // while
  i := 0
  for i < 10 {
    fmt.Print( i, " " )
    i++
  }
  fmt.Println()
  // infinite loop
  //for {
  //  fmt.Println( "Dont't do that." )
  //}
  //---------------------------------------

  //-- IF ---------------------------------
  // if
  i = 10
  if i < 5 {
    fmt.Println( i, "is smaller than 5." )
  } else {
    fmt.Println( i, "is equal or larger than 5." )
  }
  // if with statement
  if i = 3; i < 5 {
    fmt.Println( i, "is smaller than 5." )
  } else {
    fmt.Println( i, "is equal or larger than 5." )
  }
  //---------------------------------------

  //-- switch -----------------------------
  // switch
  switch os := runtime.GOOS; os {
    case "darwin":
      fmt.Println( "os x." )
    case "linux" :
      fmt.Println( "linux." )
    default :
      fmt.Println( "%s.\n", os )
  }
  // express behind case
  num := 1
  switch start := 0; num {
    case start:
      fmt.Println( "0" )
    case start+1:
      fmt.Println( "1" )
    default:
      fmt.Println( "other" )
  }
  // switch without var ( simplify if..else.. )
  currenthour := time.Now().Hour()
  fmt.Println( "currenthour:", currenthour )
  switch {
    case currenthour < 12:
      fmt.Println( "good morning!" )
    case currenthour < 17:
      fmt.Println( "Good afternoon." )
    default:
      fmt.Println( "Good evening" )
  }
  // judge interface type which was implemented
  convert( 125 )
  convert( 39.44 )
  convert( "Yup" )
  //---------------------------------------

  //-- Iterate ----------------------------
  cardValues := []string{ "Ace", "Two", "Three", "Four" }
  for i, value := range cardValues {
    fmt.Println( i, value )
  }
  //---------------------------------------

}


