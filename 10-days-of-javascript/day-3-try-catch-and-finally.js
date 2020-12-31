function reverseString(s) {
    try {
        var splitted = s.split("");
        splitted = splitted.reverse();
        var ans = splitted.join("");
        console.log(ans);

    } catch (err){
        console.log(err.message);
        console.log(s);
    }
}