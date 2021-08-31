// Usage: fmt.Errorf()
package main

import(
  "fmt"
)

func checkUserNameExist( username string ) ( bool, error ) {
  if username == "foo" {
    return true, fmt.Errorf( "username %s is already existed.", username )
  }
  return false, nil
}

func main() {
  if _, err := checkUserNameExist( "foo" ); err != nil {
    fmt.Println( err )
  }
}
