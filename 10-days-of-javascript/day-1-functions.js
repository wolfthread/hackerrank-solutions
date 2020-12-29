
function factorial(n) { 
    var fact = 1;
    for (let i = 0; i < n; i++) { 
        fact *= (n - i);
    }
    return fact;
};
