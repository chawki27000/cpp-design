#pragma once

#include "DrawStrategy.hpp"
#include "Circle.hpp"

class Circle;

class DrawCircleStrategy
{
public:
    virtual ~DrawCircleStrategy() = default;

    virtual void draw(const Circle& circle) const = 0;
};