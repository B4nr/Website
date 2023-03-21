var sum = 3;
var prod = 1;
let text = `Sum: ${sum} && Product: ${prod};`;
localStorage.setItem("textKey", text);


function goToMain () {
    window.location.href = "../../index.html";
}

function gameOver () {
    alert("You Lost BOZO!")

}

var someVarName = localStorage.getItem("someVarKey");

function writeVariables () {
    document.getElementById("vars").innerHTML = localStorage.getItem("textKey");
}