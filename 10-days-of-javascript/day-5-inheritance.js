class Rectangle {
    constructor(w, h) {
        this.w = w;
        this.h = h;
    }
}

Rectangle.prototype.area = function() {
    return this.w * this.h;
}

class Square extends Rectangle {
    constructor(side){
        super(side, side);
        this.side = side;
    }
}
