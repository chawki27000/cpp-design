#pragma once

#include "Shape.hpp"

class Square : public Shape {
public:
  explicit Square(double side) : side_(side) {}

  double getSide() const {return side_;}
  double getCenter() const {return center_;}

  void draw() const override;

private:
  double side_, center_;
};