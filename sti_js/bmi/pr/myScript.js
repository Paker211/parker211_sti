const inputHeight = document.querySelector('.height');
const inputWeight = document.querySelector('.weight');
const btnSend = document.querySelector('.send');
const listRecord = document.querySelector('.list');
const arrayBMIrecord = [];


const BMIdata = {
  "overThin": {
    class: 'text-overThin',
    nameStatus: "overThin"
  },
  "normal": {
    class: 'text-normal',
    nameStatus: "normal"
  },
  "warning": {
    class: 'text-warning',
    nameStatus: "warning"
  },
  "danger": {
    class: 'text-danger',
    nameStatus: "danger"
  }
}

function render() {
  let str = '';
  arrayBMIrecord.forEach(function(item){
    return str += '<li>BMI:' + item.BMI + ',Status is <span class="' + BMIdata[item.status].class + '">' + BMIdata[item.status].nameStatus + '</span></li>'

  })
  listRecord.innerHTML = str;
}

function calBMI() {
  const numberHeight = inputHeight.value;
  const numberWeight = inputHeight.value;
  const numberBMI = parseInt(numberWeight/((numberHeight/numberWeight)**2));

  const userRecord = {
    height: '',
    weight: '',
    BMI: '',
    status: ''
  }

  userRecord.height = Number(numberHeight);
  userRecord.weight = Number(numberWeight);
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
  inputWeight.value = '';
}

btnSend.addEventListener('click', calBMI);

