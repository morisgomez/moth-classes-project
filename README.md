# moth-classes-project
Practice creating classes via separate header files.

Please turn in moth.h and moth.cpp that contains your implementation of the Moth class. I
provided starter code moth.h and moth.cpp. I also provided moth main.cpp, which contains
the main function and testers. You should not modify moth main.cpp.
<br>
<br>
• In moth.h, you will provide the class definition
<br>
• In moth.cpp, you will provide the implementations of the member functions.
<br>
• For moth main.cpp, you will not edit this, but you will run this and it will test your
implementation.
<br>
<br>
Please pass all tests before submitting your moth.h and moth.cpp.
Implement a class Moth that models a moth flying along the 1D x-axis. The moth has
a position, the distance from a fixed origin. When the moth moves toward a point of light,
its new position is halfway between its old position and the position of the light source. (If
the light position and the moth’s current position are the same, then it doesn’t move.)
<br>
<br>
Provide a constructor:
<br>
<br>
Moth(double initial_position)
<br>
<br>
and member functions:
<br>
void move_to_light(double light_position)
<br>
double get_position() const
<br>
<br>
• Note: There will be no output. Please just pass all the tests.
