const inputHeight = document.querySelector('.height');
const inputKg = document.querySelector('.kg');
const btnSend = document.querySelector('.send');
const listRecord = document.querySelector('.list')
const arrayBMIrecord = [];

const BMIData = {
  "overThin": {
    class: 'text-secondary',
    nameStatus: "overThin"
  },
  "normal": {
    class:"text-primary",
    nameStatus:"normal"
  },
  "warning": {
    class:"text-warning",
    nameStatus:"overWeight"
  },
  "danger": {
    class:"text-danger",
    nameStatus:"danger"
  }
}

function render() {
  let str = '';
  arrayBMIrecord.forEach(function(item){
    return str += '<li>BMI:' + item.BMI +
                    ', Status is <span class="'+
                    BMIData[item.status].class+'">' +
                    BMIData[item.status].nameStatus + '</span></li>'
  })
  listRecord.innerHTML = str;
}


function calculateBMI() {
  const numberHeight = inputHeight.value;
  const numberKG = inputKg.value;
  const numberBMI = parseInt(numberKG/((numberHeight/100)**2));

  const userRecord = {
    height: '',
    weight: '',
    BMI: '',
    status: ''
  }

  userRecord.height = Number(numberHeight);
  userRecord.weight = Number(numberKG);
  userRecord.BMI = numberBMI;
  if(numberBMI<18.5){
    userRecord.status = 'overThin';
  }else if(numberBMI>=18.5 && numberBMI<=23){
    userRecord.status = 'normal';
  }else if(numberBMI>23 && numberBMI<=35){
    userRecord.status = 'warning';
  }else{
    userRecord.status = 'danger';
  }

  arrayBMIrecord.push(userRecord);

  render();

  inputHeight.value = '';
  inputKg.value = '';
}

btnSend.addEventListener('click', calculateBMI);




