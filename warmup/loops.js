//for doing repetative task we use loops(for,while)

for (let i = 0; i < 20; i++) {
    {
        setTimeout(() => {
            console.log("Hello world")
        }, 1000+i*100)
    }
}
//dry run the program how the flow of program is goinf on.

for(let i = 3; i<5; i++){
    console.log('no',i)
}

for (let i = 2; i<9; i+=2){
    console.log(i)
}//=> runs 4 times inside the block
//on the 5th time the condition fails.

for(let i=5; i>0; i--){
    console.log(i)
}

// for(i = 4; i<3; i++){} //runs 0 time

// for(i = 1; i>0; i++){} //infine loop because the condition is 
//always true; useful trick to heatup laptop to remove ants.

function greet(){console.log('namaste!')}
for(let i = 0; i<10; i++){
greet()
}

let arr = [1,3,5,6 ,89]
console.log(arr.length)

arr.forEach(element => {
    if(element%2===0){
        console.log(element)
    } 
});

//while loop

let i = 0
while( i <5){
    console.log('Printing',i)
    i++
}
