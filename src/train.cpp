#include "train.h"

Cage::Cage(): lamp(false), left(nullptr), right(nullptr) {
}

void Cage::on() {
  lamp = true;
}
void Cage::off() {
  lamp = false;
}

bool Cage::isLight() const {
  return lamp;
}
