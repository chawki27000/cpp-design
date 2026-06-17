#pragma once

#include "Shape.hpp"
#include "DrawSquareStrategy.hpp"

#include <memory>
#include <utility>

class Square : public Shape
{
public:
  explicit Square(double side, std::unique_ptr<DrawSquareStrategy> drawer)
      : side_(side), drawer_(std::move(drawer))
  {
  }

  double getSide() const { return side_; }
  double getCenter() const { return center_; }

  void draw() const override;

private:
  double side_, center_;
  std::unique_ptr<DrawSquareStrategy> drawer_;
};