var parent = document.getElementById('outer');
var child = document.getElementById('inner');

parent.addEventListener('click', function(){
  console.log('Parent Capture!');
}, true);

parent.addEventListener('click', function(){
  console.log('Parent Bubblind!');
}, false);

child.addEventListener('click', function(event){
  event.stopPropagation();
  console.log('Child Capture!')
}, true);

child.addEventListener('click', function(){
  event.stopPropagation();
  console.log('Child Bubbling!')
}, false);

// addEventListener
let btn = document.getElementById('btn');
const clickHandler = function() {
  console.log('Hi');
}
const clickHandler2 = function() {
  console.log('Hello');
}

btn.addEventListener('click', clickHandler, false);
btn.addEventListener('click', clickHandler2, false);
