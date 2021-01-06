function input(num) {
    document.getElementById("res").innerHTML += num;
}

function clearResult() {
    document.getElementById("res").innerHTML = "";   
}

function calculateAndShowResult() {
    operation = document.getElementById("res").textContent.trim();
    var ans = 0;
    if (operation.includes("+")) {
        var nums = operation.split("+");
        x = parseInt(nums[0], 2);
        y = parseInt(nums[1], 2);
        ans = x + y;
        
    } else if (operation.includes("-")) {
        var nums = operation.split("-");
        x = parseInt(nums[0], 2);
        y = parseInt(nums[1], 2);
        ans = x - y;

    } else if (operation.includes("*")) {
        var nums = operation.split("*");
        x = parseInt(nums[0], 2);
        y = parseInt(nums[1], 2);
        ans = x * y;
        
    } else if (operation.includes("/")) {
        var nums = operation.split("/");
        x = parseInt(nums[0], 2);
        y = parseInt(nums[1], 2);
        ans = Math.floor(x / y);
    }
    document.getElementById("res").innerHTML = ans.toString(2);
}