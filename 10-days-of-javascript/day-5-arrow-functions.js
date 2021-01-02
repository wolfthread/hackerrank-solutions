function modifyArray(nums) {
    const MODIFIED = nums.map(element => element % 2 == 0 ? element * 2 : element * 3);
    return MODIFIED
}
