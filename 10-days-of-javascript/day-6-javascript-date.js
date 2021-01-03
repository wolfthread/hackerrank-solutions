function getDayName(dateString) {
    let dayName;
    const convertedDate = new Date(dateString);
    const convertedDay = convertedDate.getDay();
    const allDays = ["Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday","Saturday"];
    return allDays[convertedDay];
}