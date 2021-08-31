// Usage: errors.New()
package main

import (
  "fmt"
  "errors"
)

func checkUserNameExist( username string ) ( bool, error ) {
  if username == "bar" {
    return true, errors.New( "Username bar is already exist." )
  }
  return false, nil
}

func main() {
  if _, err :=checkUserNameExist( "bar" ); err != nil {
    fmt.Println( err )
  }
}
