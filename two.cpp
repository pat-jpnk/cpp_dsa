#include <iostream>


class Rectangle {

private:

int length;
int breadth;

public:
  
  Rectangle() {
    this->length = 1;
    this->breadth = 1;
  }

  Rectangle(int l, int b) {
    this->length = l;
    this->breadth = b;
  }


  int area() {
    return this->length * this->breadth;
  }

  void changeLength(int l) {
    this->length = l;
  }

  std::string getString();

  ~Rectangle(){};           // destructor

};


std::string Rectangle::getString() {
    return "Rectangle";
  }



int main() {

  Rectangle r(2,4);

  std::cout << "area: " << r.area() << std::endl;
  r.changeLength(5);
  std::cout << "area: " << r.area() << std::endl;

  std::cout << r.getString() << std::endl;


  return 0;
}
