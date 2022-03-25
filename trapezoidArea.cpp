// Copyright (c) 2022 Aidan Lalonde-Novales All rights reserved
//
// Created by Aidan Lalonde-Novales
// Created on 2022-03-25
// This is a program that calculates the area of a
// trapezoid given the two bases and the height

#include <iostream>

int main() {
  // function that calculates the area of a trapezoid
  int bottomSide;
  int topSide;
  int height;
  int area;

  // input
  std::cout << "Enter the Bottom Side of the Trapezoid (mm): ";
  std::cin >> bottomSide;
  std::cout << "Enter the Top Side of the Trapezoid (mm): ";
  std::cin >> topSide;
  std::cout << "Enter the Height of the Trapezoid (mm): ";
  std::cin >> height;

  // process
  area = ((bottomSide+topSide)/2)*height;

  // output
  std::cout << std::endl;
  std::cout << "The Area of the Trapezoid is " << area << " mm²." << std::endl;
  std::cout << "\nDone." << std::endl;
}
