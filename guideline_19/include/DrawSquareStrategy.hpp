#pragma once

#include "DrawStrategy.hpp"
#include "Square.hpp"

class Square;

class DrawSquareStrategy
{
public:
    virtual ~DrawSquareStrategy() = default;

    virtual void draw(const Square& square) const = 0;
};