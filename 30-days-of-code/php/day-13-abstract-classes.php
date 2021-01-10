<?php
abstract class Book {
    
    protected $title;
    protected  $author;
    
     function __construct($t,$a){
        $this->title=$t;
        $this->author=$a;
    }
    abstract protected function display();
}

//Write MyBook class
class MyBook extends Book {
  private $price;

  public function __construct($title, $author, $price) {
    Book::__construct($title, $author);
    $this->price = $price;
  }
  function display(){
    echo "Title: ".$this->title."Author: ".$this->author."Price: ".$this->price."\n";
  }
}

$title=fgets(STDIN);
$author=fgets(STDIN);
$price=intval(fgets(STDIN));
$novel=new MyBook($title,$author,$price);
$novel->display();

?>