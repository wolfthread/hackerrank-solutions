function sides(literals, ...expressions) {
    const [AREA, PERIMETER] = expressions;
    const side1 = (PERIMETER + (Math.sqrt((PERIMETER * PERIMETER) - (16 * AREA))))/4;
    const side2 = (PERIMETER - (Math.sqrt((PERIMETER * PERIMETER) - (16 * AREA))))/4;
    return [side1, side2].sort();
}
