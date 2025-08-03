//declaration of functions
function printHelloWorld(){
    console.log("Hello World!")
}

function greet(name){
    console.log('Namaste',name)
}

function sum(a,b){
    console.log(a+b)
}

function square(b){
    return b*b;
}

//if else
function isEligible(age){
    
    if(age>=18) return 'Eligible'
    else if(age <1) return new Error('Invalid Input')
    return 'Not Eligible'
}

function isEven(num){
    return num%2===0 ? 'Even' : 'Odd'
}
console.log(isEven(20))
