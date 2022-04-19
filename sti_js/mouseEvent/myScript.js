let outer = document.querySelector('.outer');
let inner = document.querySelector('.inner');

outer.addEventListener('mouseover', function(){
  console.log('outer');
}, false);

inner.addEventListener('mouseover', function(){
  console.log('inner');
}, false);
