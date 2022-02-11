"use strict";
const ninja = {
    name: 'Jason',
    age: 30,
    speak(text) {
        console.log(text);
    },
    spend(amount) {
        console.log('I spent', amount, 'dollars');
        return amount;
    }
};
const greetPerson = (person) => {
    console.log('hello', person.name);
};
// greetPerson(ninja);
// class
class Invoice {
    constructor(client, details, amount) {
        this.client = client;
        this.details = details;
        this.amount = amount;
    }
    format() {
        return `${this.client} owes $${this.amount} for ${this.details}`;
    }
}
class Payment {
    constructor(recipient, details, amount) {
        this.recipient = recipient;
        this.details = details;
        this.amount = amount;
    }
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
const form = document.querySelector('.new-item-form');
//console.log(form.children);
const type = document.querySelector('#type');
const tofrom = document.querySelector('#tofrom');
const details = document.querySelector('#details');
const amount = document.querySelector('#amount');
class ListTemplate {
    constructor(container) {
        this.container = container;
    }
    render(item, heading, pos) {
        const li = document.createElement('li');
        const h4 = document.createElement('h4');
        h4.innerText = heading;
        li.append(h4);
        const p = document.createElement('p');
        p.innerText = item.format();
        li.append(p);
        if (pos === 'start') {
            this.container.prepend(li);
        }
        else {
            this.container.append(li);
        }
    }
}
// list template istance
const ul = document.querySelector('ul');
const list = new ListTemplate(ul);
form.addEventListener('submit', (e) => {
    e.preventDefault();
    let doc;
    let values;
    values = [tofrom.value, details.value, amount.valueAsNumber];
    if (type.value === 'invoice') {
        doc = new Invoice(...values);
    }
    else {
        doc = new Payment(...values);
    }
    console.log(doc);
    list.render(doc, type.value, 'start');
});
// GENERICS
const addUID = (obj) => {
    let uid = Math.floor(Math.random() * 100);
    return Object.assign(Object.assign({}, obj), { uid });
};
let docOne = addUID({ name: 'yoshi', age: 40 });
console.log(docOne);
const docThree = {
    uid: 2,
    resourceName: 'person',
    data: 'shuan'
};
console.log(docThree);
const docFour = {
    uid: 2,
    resourceName: 'person',
    data: 23
};
console.log(docFour);
// ENUMS
var ResourceType;
(function (ResourceType) {
    ResourceType[ResourceType["BOOK"] = 0] = "BOOK";
    ResourceType[ResourceType["AUTHOR"] = 1] = "AUTHOR";
    ResourceType[ResourceType["FILM"] = 2] = "FILM";
    ResourceType[ResourceType["DIRECTOR"] = 3] = "DIRECTOR";
    ResourceType[ResourceType["PERSON"] = 4] = "PERSON";
})(ResourceType || (ResourceType = {}));
const docFive = {
    uid: 20,
    resourceType: ResourceType.BOOK,
    data: { title: 'name of the wind' }
};
const docSix = {
    uid: 40,
    resourceType: ResourceType.PERSON,
    data: { name: 'peter' }
};
console.log(docFive, docSix);
// Tuples v.s. arr
let arr = ['heelo', 31, true];
let tup = ['ryan', 34, false];
