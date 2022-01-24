// explicit types
let character: string;
let age: number;
let isLoggedIn: boolean;
let uid: string|number;

age = 30;

// arrays
let ninjas: string[] = [];
ninjas.push('jason');

// union types
let mixed: (string|number)[] = [];
mixed.push('hello');
mixed.push(23);
console.log(mixed);


// objects
let ninjaOne: object;
ninjaOne = { name: 'Jason', age: 39 };

let ninjaTwo: {
  name: string,
  age: number,
  beltColour: string
}

ninjaTwo = { name: 'mario', age: 30, beltColour: 'yello' }

console.log(ninjaTwo);

// Dynamic(any) types
let quantity: any = 24;
quantity = true;
quantity = {number: 23}

let mixes: nay[] = [];
mixes.push('mario')
mixes.push(23)
mixes.push(false)
console.log(mixes)















