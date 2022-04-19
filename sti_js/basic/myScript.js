
let myList = document.getElementsByClassName('myList');

let newList = document.createElement('li');
let newListAgain = document.createElement('li');

let refNode = document.querySelectorAll('li')[1];

let textNode = document.createTextNode("hello world!");
let textNodeAgain = document.createTextNode("hello world again!");

newList.appendChild(textNode);
newListAgain.appendChild(textNodeAgain);

myList[0].appendChild(newList);
myList[0].insertBefore(newListAgain, refNode);


let box = document.querySelector('.box');
box.style.color = 'deeppink';
box.style.fontSize = '20px';

var msg = 'msg1';
console.log(window.msg);



