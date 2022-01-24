interface IPerson {
  name: string;
  lastname: string;
}


function greeter(person: IPerson): string {
  return "Hello, " + person.name ;
}

const Jason: IPerson = {
  name: "Jason",
  lastname: "Wang"
}

print(greeter(Jason));
