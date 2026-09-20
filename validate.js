// function validateForm() {
//     let name = document.forms["regForm"]["name"].value;
//     let email = document.forms["regForm"]["email"].value;
//     let userid = document.forms["regForm"]["userid"].value;
//     let password = document.forms["regForm"]["password"].value;
//     let contact = document.forms["regForm"]["contact"].value;
   
//     let country = document.forms["regForm"]["country"].value;

//     if (name === "" || email === "" || userid === "" || password === "" || contact === "" || country === "") {
//         alert("All fields must be filled out");
//         return false;
//     }

//     let emailPattern = /^[^ ]+@[^ ]+\.[a-z]{2,3}$/;
//     if (!email.match(emailPattern)) {
//         alert("Invalid email format");
//         return false;
//     }

//     let phonePattern = /^[0-9]{10}$/;
//     if (!contact.match(phonePattern)) {
//         alert("Contact number must be 10 digits");
//         return false;
//     }

//     if (password.length < 6) {
//         alert("Password must be at least 6 characters long");
//         return false;
//     }

//     return true;
// }
function validateForm() {
let name= document.forms["regForm"]["name"].value;
let email= document.forms["regForm"]["email"].value;
let password= document.forms["regForm"]["password"].value;
let contact= document.forms["regForm"]["contact"].value;
let userid= document.forms["regForm"]["userid"].value;
let country= document.forms["regForm"]["country"].valuel;

if(name===""|| email===""|| password===""|| contact===""||userid===""||country===""){
    alert("All field must be filled up.");
    return false;
}
let emailPattern=/^[^ ]+@[^ ]+\.[a-z]{2,3}$/;
if(!email.match(emailPattern)){
    alert("Invalid email id.");
    return false;
}
if(password.length <6){
    alert("Password must be at least 6 characters long");
    return false;
}
let contactPattern =/^[0-9]{10}$/;
if(!contact.match(contactPattern)){
    alert("Contact number must be 10 digit");
    return false;
}

return true;
}
