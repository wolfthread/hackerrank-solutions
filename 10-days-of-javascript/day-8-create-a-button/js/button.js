var button = document.createElement('button');
var count = "0";
button.id = 'btn';
button.innerHTML = count;
button.onclick = function increaseNum() {
                    count++;
                    button.innerHTML = count;
                };
document.body.appendChild(button);
