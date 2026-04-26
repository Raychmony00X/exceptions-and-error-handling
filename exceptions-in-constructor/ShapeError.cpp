#include "ShapeError.h"

ShapeError::ShapeError(const std::string& message)
    : std::logic_error(message) {
}