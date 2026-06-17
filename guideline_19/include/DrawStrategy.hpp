#pragma once

class Circle;
class Square;

template <typename T>
class DrawStrategy
{
public:
    virtual ~DrawStrategy() = default;

    virtual void draw(const T&) = 0;

private:
};