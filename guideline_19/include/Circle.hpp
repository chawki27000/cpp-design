#pragma once

#include "Shape.hpp"

class Circle : public Shape {
public:
  explicit Circle(double radius) : radius_(radius) {}

  double getRadius() const { return radius_; }
  double getCenter() const { return center_; }

  void draw() const override;

private:
  double radius_, center_;
};