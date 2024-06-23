#pragma once
#include <iostream>
#include<string>

class shapes {

public:
    std::string name;
    int side_a ;
    int side_b ;
    int side_c;
    int side_d ;

    int cornerA;
    int cornerB;
    int cornerC;
    int cornerD;


    shapes(int a, int b, int c, int cA, int cB, int cC);
    virtual void print_info();


    shapes(int a, int b, int c, int d, int cA, int cB, int cC, int cD);

    virtual void print_info_two();

};




class triangle :public shapes {
public:

    triangle(int a, int b, int c, int cA, int cB, int cC);
  
};
class rectangular_triangle :public shapes {
public:
    rectangular_triangle(int a, int b, int c, int cA, int cB, int cC);
   
};


class isosceles_triangle : public shapes {
public:
    isosceles_triangle(int a, int b, int c, int cA, int cB, int cC);
    
};

class equilateral_triangle : public shapes {
public:
    equilateral_triangle(int a, int b, int c, int cA, int cB, int cC);
        
};

class quadrangle : public shapes {
public:
    quadrangle(int a, int b, int c, int d, int cA, int cB, int cC, int cD);
    
};

class rectangle : public shapes {
public:
    rectangle(int a, int b, int c, int d, int cA, int cB, int cC, int cD);
 
};

class square : public shapes {
public:
    square(int a, int b, int c, int d, int cA, int cB, int cC, int cD);
       
};

class parallelogram : public shapes {
public:
    parallelogram(int a, int b, int c, int d, int cA, int cB, int cC, int cD);
     
};

class rhomb : public shapes {
public:
    rhomb(int a, int b, int c, int d, int cA, int cB, int cC, int cD);
    
};