#ifndef wolf_H
#define wolf_H

#include "classification.H"
class wolf
:
    public animal
{
    int damage_ = 65;

public:
    wolf()
    {
        cout<< "Constructing a wolf." << endl;
    }

    ~wolf()
    {
        cout<< "Destructing a wolf." << endl;
    }

    void eat();
    //virtual void rest() = 0;
  //  virtual void sleep() = 0;
  //  virtual void hunt() = 0;
  //  virtual void drink() = 0;
  //  virtual void reproduce() = 0;
    //virtual void die() = 0;
};

#endif
