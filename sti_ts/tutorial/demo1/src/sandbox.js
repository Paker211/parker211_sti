// explicit types
var character;
var age;
var isLoggedIn;
var uid;
age = 30;
// arrays
var ninjas = [];
ninjas.push('jason');
// union types
var mixed = [];
mixed.push('hello');
mixed.push(23);
console.log(mixed);
// objects
var ninjaOne;
ninjaOne = { name: 'Jason', age: 39 };
var ninjaTwo;
ninjaTwo = { name: 'mario', age: 30, beltColour: 'yello' };
console.log(ninjaTwo);
// Dynamic(any) types
var quantity = 24;
quantity = true;
quantity = { number: 23 };
var mixes = [];
mixes.push('mario');
mixes.push(23);
mixes.push(false);
console.log(mixes);
