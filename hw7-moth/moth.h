//this header file defines member functions of class moth.
//this header file also declares member variables of class moth.
#ifndef MOTH_H
#define MOTH_H

class Moth
{
public:
    //constructor function declaration.
  Moth(double initial_position);

    //move_to_light function declaration.
  void move_to_light(double light_position);

    //get_position function declaration.
  double get_position() const;
private:
    double p;

};
#endif
