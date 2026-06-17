#pragma once

#include "Shape.hpp"
#include "DrawCircleStrategy.hpp"

#include <memory>
#include <utility>

class Circle : public Shape
{
public:
  explicit Circle(double radius, std::unique_ptr<DrawCircleStrategy> drawer)
      : radius_(radius), drawer_(std::move(drawer))
  {
  }

  double getRadius() const { return radius_; }
  double getCenter() const { return center_; }

  void draw() const override;

private:
  double radius_, center_;
  std::unique_ptr<DrawCircleStrategy> drawer_;
};