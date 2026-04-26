#pragma once
#include <stdexcept>
#include <string>

class ShapeError : public std::logic_error {
public:
    explicit ShapeError(const std::string& message);
};
