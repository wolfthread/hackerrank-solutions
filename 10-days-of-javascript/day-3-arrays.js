function getSecondLargest(nums) {
    // Complete the function
    let highest = 0;
    let lowest = 0;
    for (let i = 0; i < nums.length; i++) {
        var current = nums[i]
        if (current > highest) {
            lowest = highest;
            highest = current;
        }
        if (current > lowest && current < highest) {
            lowest = current;
        }
    }
    return lowest;
}

