#include <iostream>
#include<string>
#include"shapes.h"



   shapes::shapes(int a, int b, int c, int cA, int cB, int cC) : side_a(a), side_b(b), side_c(c),
        cornerA(cA), cornerB(cB), cornerC(cC) {

        this->side_a = a;
        this->side_b = b;
        this->side_c = c;


        this->cornerA = cA;
        this->cornerB = cB;
        this->cornerC = cC;

    }
  void shapes::print_info() {
        std::cout << name << std::endl << "Стороны: a=" << side_a << " b=" << side_b << " c=" << side_c <<
            std::endl << "Углы: A=" << cornerA << " B=" << cornerB << " C=" << cornerC << std::endl << std::endl;
    }


   shapes::shapes(int a, int b, int c, int d, int cA, int cB, int cC, int cD) :side_a(a), side_b(b), side_c(c), side_d(d),
        cornerA(cA), cornerB(cB), cornerC(cC), cornerD(cD) {

        this->side_d = d;
        this->cornerD = cD;

    }

   void shapes::print_info_two() {
        std::cout << name << std::endl << "Стороны: a=" << side_a << " b=" << side_b << " c=" << side_c << " d=" << side_d <<
            std::endl << "Углы: A=" << cornerA << " B=" << cornerB << " C=" << cornerC << " D=" << cornerD <<
            std::endl << std::endl;
    }






   triangle::triangle(int a, int b, int c, int cA, int cB, int cC) :shapes(a, b, c, cA, cB, cC) {
        name = "Треугольник:";
        void print_info();
    }


   rectangular_triangle::rectangular_triangle(int a, int b, int c, int cA, int cB, int cC) :shapes(a, b, c, cA, cB, cC) {
        name = "Прямоугольный треугольник:";
        cornerC = 90;
        void print_info();
    }




   isosceles_triangle::isosceles_triangle(int a, int b, int c, int cA, int cB, int cC) : shapes(a, b, c, cA, cB, cC) {
        name = "Равнобедренный треугольник:";
        if (side_a != side_c) {
            side_a = side_c;
        }
        if (cornerA != cornerC) {
            cornerA = cornerC;
        }
        void print_info();

    }




   equilateral_triangle::equilateral_triangle(int a, int b, int c, int cA, int cB, int cC) : shapes(a, b, c, cA, cB, cC) {
        name = "Равносторонний треугольник:";
        if (side_a != side_b != side_c) {
            side_a = side_b = side_c;
        }

        cornerA = 60;
        cornerB = 60;
        cornerC = 60;
        void print_info();

    }



   quadrangle::quadrangle(int a, int b, int c, int d, int cA, int cB, int cC, int cD) : shapes(a, b, c, d, cA, cB, cC, cD) {
        name = "Четырехугольник:";
        void print_info_two();
    }

   rectangle::rectangle(int a, int b, int c, int d, int cA, int cB, int cC, int cD) : shapes(a, b, c, d, cA, cB, cC, cD) {
        name = "Прямоугольник:";

        side_a = side_c;
        side_b = side_d;

        cornerA = 90;
        cornerB = 90;
        cornerC = 90;
        cornerD = 90;
        void print_info_two();
    }




   square::square(int a, int b, int c, int d, int cA, int cB, int cC, int cD) : shapes(a, b, c, d, cA, cB, cC, cD) {
        name = "Квадрат:";
        side_a = side_c = side_b = side_d;

        cornerA = 90;
        cornerB = 90;
        cornerC = 90;
        cornerD = 90;
        void print_info_two();
    }




   parallelogram::parallelogram(int a, int b, int c, int d, int cA, int cB, int cC, int cD) : shapes(a, b, c, d, cA, cB, cC, cD) {
        name = "Параллелограмм:";
        side_a = side_c;
        side_b = side_d;

        cornerA = cornerC;
        cornerB = cornerD;


        void print_info_two();
    }



   rhomb::rhomb(int a, int b, int c, int d, int cA, int cB, int cC, int cD) : shapes(a, b, c, d, cA, cB, cC, cD) {
        name = "Ромб:";
        side_a = side_c = side_b = side_d;
        cornerA = cornerC;
        cornerB = cornerD;
        void print_info_two();
    }

