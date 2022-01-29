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
  if(type.value === 'invoice'){
    doc = new Invoice(tofrom.value, details.value, amount.valueAsNumber);
  } else{
    doc = new Payment(tofrom.value, details.value, amount.valueAsNumber);
  }

  console.log(doc);
  list.render(doc, type.value, 'start');

});




