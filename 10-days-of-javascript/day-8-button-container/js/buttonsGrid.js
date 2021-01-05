var arrayOfNumbers = [1,2,3,6,9,8,7,4]
var arrayOfBtns = ["btn1", "btn2", "btn3", "btn6", "btn9", "btn8", "btn7", "btn4"];
var thisBtn;
document.getElementById('btn5').addEventListener('click', () => {
    // clockwise rotation
    let endBtn = arrayOfBtns.shift();
    arrayOfBtns.push(endBtn);
    console.log(arrayOfBtns)
    for(let i = 0; i < arrayOfBtns.length + 1; i++){
        thisBtn = document.getElementById(arrayOfBtns[i]);
        thisBtn.innerHTML = arrayOfNumbers[i];
    }
})
