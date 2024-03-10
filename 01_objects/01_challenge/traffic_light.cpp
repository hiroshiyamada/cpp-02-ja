#include "traffic_light.h"

std::string get_action(TrafficLight light)
{
    std::string color;
    switch (light)
    {
    case TrafficLight::red:
        color = "Stop";
        break;
    case TrafficLight::yellow:
        color = "Caution";
        break;
    case TrafficLight::green:
        color = "Go";
        break;
    default:
        break;
    }
    return color;
}