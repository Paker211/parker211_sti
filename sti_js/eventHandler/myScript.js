let btn = document.getElementsByClassName('btn')[0];

btn.addEventListener('click', function(event){
  console.log(event);
}, false);


// this
let lbl = document.querySelector('.lbl');
let chkbox = document.getElementById('chkbox');

lbl.addEventListener('click', function(e){
  console.log(e.target.tagName, 1);
  console.log(this.tagName, 1);
}, false);

chkbox.addEventListener('click', function(e){
  console.log(e.target.tagName, 2);
  console.log(this.tagName, 2);
}, false);

