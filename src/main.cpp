// Copyright 2021 Kuznetsov Mikhail
#include <iostream>
#include <random>
#include <ctime>
#include "train.h"

int main() {
  srand(time(0));
  Train* train1 = new Train;
  train1->createCages(5);  // length of train is 5
  train1->print();  // lamp states are arbitrary
  std::cout << "The length of train is "
  << train1->countLength() << std::endl;  // 10
  train1->print();  // all lamp were off in the counting process
  Train* train2 = new Train;
  train2->createCages(std::rand() % 500 + 1);  // length is random value between 1 and 500
  std::cout << "The length of train is " << train2->countLength();  // find length
  train2->print();  // check
  return 0;
}
