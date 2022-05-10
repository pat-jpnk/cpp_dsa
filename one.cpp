#include <iostream>
#include <stdlib.h>

class Car {

public:
  int doors; 
  
  Car() {
    std::cout << "Constructor called\n";
  }

};


int main() {
 
 Car c1;


 // array

 int A[5]; // Array is created on the stack

 A[0] = 4;
  
 int B[2] = {2,3};
 
 std::cout << A[0] << std::endl;

 std::cout << "\n" << std::endl;

 for(int i = 0; i < 2; i++) {
   std::cout << B[i] << std::endl;
 }


 // structure (user-defined data types, collection of dissimilar data types)
 

 struct Rectangle {
   int len; 
   int bre; 
 };

 // size of struct is sum of its members 

 struct Rectangle r;

 struct Rectangle r2 = {10,5};  // inside stack, main function frame

 printf("len r2: %d\n",r2.len);


 // pointer (address variable, indirect access, access heap memory/resources/parameter passing)

 int g = 53;  // created on main stack frame 

 int *p;      // created on main stack frame

 p = &g;

 std::cout << *p << std::endl;

 int *i = ((int*) malloc(5 * sizeof(int)));
  
 // references (parameter passing) 

 int h = 127;

 int &b = h;      // reference to h     

 std::cout << b << "  " << h << std::endl;

 // pointer to struct


 // static object (stack)

 struct Rectangle rs = {2,4};

 struct Rectangle *rsp = &rs;


 // dynamic object (heap)

 struct Rectangle *rd = (struct Rectangle*) malloc(sizeof(struct Rectangle));
 rd->len = 24;

 std::cout << rd->len << std::endl;


 // parameter passing methods 

 // pass by value

 // void swap(int x, int y)


 // pass by address

 // void swap(int *x, int *y)


 // pass by reference (machine code is copied in place, functon might not have own stack frame, should not be used with intensive methods) 

 // void swap(int &x, int &y)

  

 // arrays cannot be passed by value, but a struct with an array member can 
 // be passed by value

 return 0;
  
}

