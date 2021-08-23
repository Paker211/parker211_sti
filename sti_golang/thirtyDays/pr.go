package main

import (
  "fmt"
)

func main() {
  elements := make(map[string]string)
  elements["Li"] = "Lithiun"
  elements["Be"] = "Berry"
  elements["F"] = "Fluorie"
  elements["Ne"] = "Neon"

  fmt.Println( elements["Li"] )


}

