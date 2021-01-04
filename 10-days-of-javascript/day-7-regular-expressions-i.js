// using capturing group and refering at the end
function regexVar() {
    var re = /^(.).*\1$/;
    return re;
}