class Polygon {
    constructor(sides){
        let per = 0;
        for (let i = 0; i < sides.length; i++) {
            per += sides[i];
        };        
        this.per = per;
    };
    perimeter() {
        return this.per;
    } ;
}