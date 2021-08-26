
package main

import "fmt"

func showHello( name string ) {
  fmt.Println( "Hello " + name + " !" )
}

func multiply( n1 int , n2 int ) int {
  var res int=n1*n2
  return res
}

func test() (int,string) {
  return 5, "Testing"
}

func add( xPtr *int ) {
  *xPtr+=10
  fmt.Println("call:",*xPtr)
}

type Person struct{
  name string
  age int
}

func main() {

  /* -- type of golang variable --
  fmt.Println( 3 ) // int
  fmt.Println( 3.1234 ) // float64
  fmt.Println( "Testing" ) //string
  fmt.Println( true ) // boolean
  fmt.Println( 'a' ) // rune
  ------------------ */

  /* -- Variable delcaration --
  // Int
  var x int
  x=4
  fmt.Println( x )
  x=10
  fmt.Println( x )
  // Float
  var f float64=3.12456
  fmt.Println( f )
  // String
  var s string="hello world!!"
  fmt.Println( s )
  // Boolean
  var b bool=true
  fmt.Println( b )
  // Rune
  var c rune='x'
  fmt.Println( c )
  ------------------ */

  /* -- I/O --
  // Basic I/O
  fmt.Print( "Input: " )
  var x int
  fmt.Scanln( &x )
  fmt.Println( x )
  ------------------ */

  /* -- Pratice --
  var a,b,res int
  fmt.Print( "Input Value: ")
  fmt.Scanln( &a, &b )
  res = a + b
  fmt.Println( res )
  ------------------ */

  /* -- Operation --
  // Arithemtic operaion: +, -, *, /
  // Sepcify operaion: =, +=, -=, *=, /=
  // Unit operaion: ++, --
  // Comparison operaion( Boolean ): >, <, >=, <=, ==
  // Logic operaion( Boolean ): !, &&, ||
  ------------------ */

  /* -- Condition expressions --
  // if basic
  if true {
    fmt.Println( "Yes")
  }
  // if..elif..else..
  var x int
  fmt.Print( "Input(100):" )
  fmt.Scanln( &x )
  if( x==100 ) {
    fmt.Println( "Good Job!" )
  } else {
    fmt.Println( "Error!!" )
  }
  ------------------ */

  /* -- Loop( Only one in golang )  --
  // For Loop
  // Pr1
  var x int=0
  for x<3 {
    fmt.Print( x, " " )
    x++
  }
  fmt.Println()
  //Pr2
  var a,res int
  for a=1;a<51;a++ {
    res+=a
  }
  fmt.Println( "res: ", res )
  ------------------ */

  /* -- Loop( break, continue )  --
  // Break
  var x int=0
  for ;x<7;x++ {
    if x==2 {
      break
    }
    fmt.Print( x, " " )
  }
  fmt.Println()
  // Continue
  var a int=0
  for ;a<7;a++ {
    if a==2 {
      continue
    }
    fmt.Print( a, " " )
  }
  fmt.Println()
  // Pr
  var n, res int
  for true {
    fmt.Scan( &n )
    res += n
    if n==0 break
  }
  fmt.Println( res )
  ------------------ */

  /* -- Function --
  // Define func --> Call func
  showHello( "Tom" )
  ------------------ */

  /* -- function Return --
  // one return variable
  var x int=multiply(3,4)
  fmt.Println( x )
  //multi return variable
  var a int
  var s string
  a,s = test()
  fmt.Println( a, s )
  ------------------ */

  /* -- Pointer  --
  // Int pointer
  var x int=19
  fmt.Println( "x:", x  )
  fmt.Println( "x Address:", &x )
  var xPtr *int=&x
  fmt.Println( "Original date:", *xPtr , "\n")
  // String poniter
  var word string="Hello"
  fmt.Println( word )
  var wordPtr *string=&word
  fmt.Println( wordPtr )
  var word2 string=*wordPtr
  fmt.Println( word2 , "\n" )
  ------------------ */

  /* -- Call by Pointer --
  var x int=10
  add( &x )
  fmt.Println( x )
  ------------------ */

  /* -- Struct --
  var p1 Person=Person{"John", 20}
  var p2 Person=Person{"Tommy", 23}
  fmt.Println( p2.name, p2.age )
  fmt.Println( p1.name, p1.age )
  ------------------ */

  /* -- Array --
  ------------------ */

  var arr [4]int=[4]int{3,10,-5,8}
  var index int=0
  for ;index<len(arr);index++{
    fmt.Println( arr[index] )
  }




}
