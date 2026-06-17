#pragma once

class Shape {
public:
  ~Shape() = default;

  virtual void draw() const = 0;
};