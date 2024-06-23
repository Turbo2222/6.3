#include <iostream>
#include<string>
#include"shapes.h"


int main()
{
    setlocale(LC_ALL, "ru");

    triangle tri(10, 20, 30, 50, 60, 70);
    tri.print_info();

    rectangular_triangle rect(10, 20, 30, 50, 60, 90);
    rect.print_info();

    isosceles_triangle isos(10, 20, 10, 50, 60, 50);
    isos.print_info();

    equilateral_triangle equi(30, 30, 30, 60, 60, 60);
    equi.print_info();

    quadrangle quad(10, 20, 30, 40, 50, 60, 70, 80);
    quad.print_info_two();

    rectangle rectang(10, 20, 10, 20, 90, 90, 90, 90);
    rectang.print_info_two();

    square square(20, 20, 20, 20, 90, 90, 90, 90);
    square.print_info_two();

    parallelogram paral(20, 30, 20, 30, 30, 40, 30, 40);
    paral.print_info_two();

    rhomb rhomb(30, 30, 30, 30, 30, 40, 30, 40);
    rhomb.print_info_two();

    return 0;
}

