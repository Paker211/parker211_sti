// Function Basic
let greet: Function;

greet = () => {
  console.log('hello');
}

const add = (a: number, b: number): void => {
  console.log(a + b);
}

add(3, 11);
greet();
add(3, 16);

const minus = (a: number, b: number): number => {
  return a+b;
}

let res = minus(19,20);
console.log(res);

// Type Alias
type StringOrNum = string | number ;
type objWithName = { name: string, uid: StringOrNum };

const logDetails = (uid: StringOrNum, item: string) => {
  console.log(`${item} has a uid of ${uid}`);
}

const greetOne = (user: objWithName) => {
  console.log(`${user.name} say hello, his uid is ${user.uid}`);
}

let ninja = {
  name: 'Jason' ,
  uid: 39439304
}
logDetails(9348934, 'Kevin');
greetOne(ninja);

// Function Signature
// Example 1
let greetTwo: (a: string, b: string) => void ;
greetTwo = (name: string, say:string) => {
  console.log(`${name} says ${say}.`);
}
greetTwo('Wang', 'hi');

// Example 2
let calc: (a: number, b: number, c?: string) => number;
calc = (numberOne: number,numberTwo: number, action?: string) => {
  if(action === 'add') {
    return numberOne + numberTwo;
  }else {
    return numberOne - numberTwo;
  }
}
console.log(calc(10, 23, 'add'))
console.log(calc(40, 23))

// Example 3
type personObj = { name: string, age: number };
let logDetail: (obj:{ name: string, age: number }) => void;
logDetail = (ninja: personObj) => {
  console.log(`${ninja.name} is ${ninja.age} years old.`)
}
let ninjaOne = {
  name: 'Chen',
  age: 29
}
logDetail(ninjaOne)

