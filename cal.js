function cal(){


    let display = document.getElementById("display");
}
function appendvalue(value){
    if(display.value=="Error"){
        display.value="";
        display.value+=value;
    }
    else{
    display.value+=value;
    }
}
function clearvalue(value){
    display.value="";
}
function deletevalue(value){
    display.value=display.value.slice(0,-1)
}
function calculate(){
    try{
        display.value= eval(display.value);
    } catch{
        display.value="Error"
    }
}