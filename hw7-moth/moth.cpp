//includes the logic for class moth.
#include "moth.h"

//constructor function logic.
Moth::Moth(double initial_position)
{
    p = initial_position; //assigns initial position.
}

//move_to_light() function logic.
void Moth::move_to_light(double light_position)
{
    if (light_position == p)
    {
        p = light_position; //can equal the light position since it would be the same.
    }
    else
    {
        p = (p + light_position) / 2.0; //new position if moving toward light.
    }
}

//get_position function logic.
double Moth::get_position() const
{
    return p; //simply returns the new position.
}
