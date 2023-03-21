var level = 1;
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

// This function is going to return the codes based on the difficulty level.
function getCode (difficultyLevel) {
    var codeA, codeB, codeC;
    codeA = Math.floor(Math.random() * difficultyLevel)+1;
    codeB = Math.floor(Math.random() * difficultyLevel)+1;
    codeC = Math.floor(Math.random() * difficultyLevel)+1;
    return [codeA, codeB, codeC];
}

function difficultyLvl () {
    level = level + 1;
}