var wiki = require('./wiki.js');
var express = require('express') ;
var app = express() ;

app.get('/', function(req, res) {
  res.send('banana') ;
});

app.use('/wiki', wiki) ;

app.listen(3000, function() {
  console.log('Listen on port 3000');
});


