// define own error struct (1)
package main

import(
  "fmt"
  "time"
)

// Step1: define error struct
type MyError struct {
  When time.Time
  What string
}

// Step2: define Error interface method
func ( e MyError ) Error() string {
  return fmt.Sprintf("at %v, %s", e.When, e.What)
}

// Step3: outpur err function
func run() error {
  return MyError{
    When: time.Now(),
    What: "id didn't work",
  }
}

// Step: use fmt.Println can get error message
func main() {
  if err := run(); err != nil {
    fmt.Println( err )
  }
}

