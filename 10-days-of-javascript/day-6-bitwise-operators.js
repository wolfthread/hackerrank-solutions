function getMaxLessThanK(n, k) {
    let maxValue = 0;
    for (let i=1; i<n+1; i++){
        for (let j=i+1; j<n+1; j++){
            let bitwiseOp = i & j;
            if (bitwiseOp < k && bitwiseOp > maxValue){
                maxValue = bitwiseOp;
            }
        }
    }
    return maxValue;
}