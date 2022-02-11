// interface
interface IsPerson {
  name: string;
  age: number;
  speak(a: string): void;
  spend(a: number): number;
}

const ninja: IsPerson = {
  name: 'Jason',
  age: 30,
  speak(text: string): void {
    console.log(text);
  },
  spend(amount: number): number {
    console.log('I spent', amount, 'dollars');
    return amount;
  }
}

// interface with class
interface HasFormatter {
  format(): string;
}

const greetPerson = (person: IsPerson) => {
  console.log('hello', person.name);
}

// greetPerson(ninja);


// class
class Invoice implements HasFormatter{
  constructor(
    readonly client: string,
    private details: string,
    public amount: number,
  ){}

  format() {
    return `${this.client} owes $${this.amount} for ${this.details}`;
  }
}

class Payment implements HasFormatter{
  constructor(
    readonly recipient: string,
    private details: string,
    public amount: number,
  ){}

  format() {
    return `${this.recipient} is owed $${this.amount} for ${this.details}`;
  }
}

// let docOne: HasFormatter;
// let docTwo: HasFormatter;
//
// docOne = new Invoice('Jason', 'web work', 340);
// docTwo = new Payment('Wang', 'painting work', 500);
//
// let docs: HasFormatter[] = [];
// docs.push(docOne);
// docs.push(docTwo);
// console.log(docs);

//
// const invOne = new Invoice('mario', 'work on the mario website', 240);
// const invTwo = new Invoice('Jason', 'work on the Jason website', 980);
//
// let invoices: Invoice[] = [];
// invoices.push(invOne);
// invoices.push(invTwo);

// invoices.forEach(inv => {
//   console.log(inv.client, inv.amount, inv.format());
// });

const form = document.querySelector('.new-item-form') as HTMLFormElement;
//console.log(form.children);

const type = document.querySelector('#type') as HTMLSelectElement ;
const tofrom = document.querySelector('#tofrom') as HTMLInputElement ;
const details = document.querySelector('#details') as HTMLInputElement ;
const amount = document.querySelector('#amount') as HTMLInputElement ;

class ListTemplate {
  constructor(private container: HTMLUListElement){}
  render(item: HasFormatter, heading: string, pos: 'start' | 'end'){
    const li = document.createElement('li');

    const h4 = document.createElement('h4');
    h4.innerText = heading;
    li.append(h4);

    const p = document.createElement('p');
    p.innerText = item.format();
    li.append(p);

    if(pos === 'start'){
      this.container.prepend(li);
    } else{
      this.container.append(li);
    }
  }
}

// list template istance
const ul = document.querySelector('ul')!;
const list = new ListTemplate(ul);

form.addEventListener('submit', (e: Event) => {
  e.preventDefault();

  let doc: HasFormatter;
  let values: [string, string, number];
  values = [tofrom.value, details.value, amount.valueAsNumber]

  if(type.value === 'invoice'){
    doc = new Invoice(...values);
  } else{
    doc = new Payment(...values);
  }

  console.log(doc);
  list.render(doc, type.value, 'start');

});


// GENERICS
const addUID = <T extends object>(obj: T) => {
  let uid = Math.floor(Math.random() * 100 );
  return {...obj, uid};
}
let docOne = addUID({name: 'yoshi', age: 40});
console.log(docOne);

// GENRERICS with interface
interface Resource<T> {
  uid: number;
  resourceName: string;
  data: T;
}

const docThree: Resource<string> = {
  uid : 2,
  resourceName: 'person',
  data: 'shuan'
}
console.log(docThree);

const docFour: Resource<number> = {
  uid : 2,
  resourceName: 'person',
  data: 23
}
console.log(docFour);


// ENUMS
enum ResourceType { BOOK, AUTHOR, FILM, DIRECTOR, PERSON }

interface Resour<T> {
  uid : number,
  resourceType: ResourceType,
  data: T
}

const docFive: Resour<object> = {
  uid : 20,
  resourceType: ResourceType.BOOK,
  data: { title: 'name of the wind' }
}

const docSix: Resour<object> = {
  uid : 40,
  resourceType: ResourceType.PERSON,
  data: { name: 'peter' }
}

console.log(docFive, docSix)

// Tuples v.s. arr
let arr = ['heelo', 31, true];
let tup: [string, number, boolean] = ['ryan', 34, false];
