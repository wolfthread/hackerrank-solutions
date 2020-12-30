function vowelsAndConsonants(s) {
    var ref = ['a', 'e', 'i', 'o', 'u', 'y'];
    var voy = [];
    var cons = [];
    for (let i = 0; i < s.length; i++) { 
        if (ref.includes(s[i])) {
            voy.push(s[i]);
        } else { 
            cons.push(s[i]);
        }
    };
    voy.push(...cons);
    for (let i = 0; i < s.length; i++) {
        console.log(voy[i]);
    };
}