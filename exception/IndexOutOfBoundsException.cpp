

#include "IndexOutOfBoundsException.h"

IndexOutOfBoundsException::IndexOutOfBoundsException() {

}

IndexOutOfBoundsException::IndexOutOfBoundsException(std::string message) {
    this->message = message;
}

void IndexOutOfBoundsException::printMessage() {
    std::cout << this->message << std::endl;
}

IndexOutOfBoundsException::IndexOutOfBoundsException(const IndexOutOfBoundsException &e) noexcept {
    this->message = e.message;
}
