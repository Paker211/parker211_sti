// define own error struct (1)
package main

import "fmt"

type errUserNameExist struct {
  userName string
}

func (e errUserNameExist) Error() string {
  return fmt.Sprintf( "username %s is already existed", e.userName )
}

func checkUserNameExist(username string) (bool, error) {
  if username == "foo" {
    return true, errUserNameExist{
      userName: username,
    }
  }
  return false, nil
}

func main() {
  if _,err := checkUserNameExist( "foo" ); err != nil {
    fmt.Println( err )
  }
}

