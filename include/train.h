#ifndef TRAIN_H_INCLUDED
#define TRAIN_H_INCLUDED

#include <
class Cage {
 private:
  bool lamp;

 public:
    Cage();
    void on()  { light=true;    }
    void off() { light = false; }
    bool isLight() const { return lamp; }
    Cage* left;
    Cage* right;
};

class Train {
 public:
    Cage* begin;
    Train();
};


#endif // TRAIN_H_INCLUDED
