"use strict";
// Function Basic
let greet;
greet = () => {
    console.log('hello');
};
const add = (a, b) => {
    console.log(a + b);
};
add(3, 11);
greet();
add(3, 16);
const minus = (a, b) => {
    return a + b;
};
let res = minus(19, 20);
console.log(res);
const logDetails = (uid, item) => {
    console.log(`${item} has a uid of ${uid}`);
};
const greetOne = (user) => {
    console.log(`${user.name} say hello, his uid is ${user.uid}`);
};
let ninja = {
    name: 'Jason',
    uid: 39439304
};
logDetails(9348934, 'Kevin');
greetOne(ninja);
// Function Signature
// Example 1
let greetTwo;
greetTwo = (name, say) => {
    console.log(`${name} says ${say}.`);
};
greetTwo('Wang', 'hi');
// Example 2
let calc;
calc = (numberOne, numberTwo, action) => {
    if (action === 'add') {
        return numberOne + numberTwo;
    }
    else {
        return numberOne - numberTwo;
    }
};
console.log(calc(10, 23, 'add'));
console.log(calc(40, 23));
let logDetail;
logDetail = (ninja) => {
    console.log(`${ninja.name} is ${ninja.age} years old.`);
};
let ninjaOne = {
    name: 'Chen',
    age: 29
};
logDetail(ninjaOne);
