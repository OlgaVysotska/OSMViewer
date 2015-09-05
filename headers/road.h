#ifndef ROAD_H
#define ROAD_H


class Road
{
public:

     Road()
     {
        // assuming that if thw lanes of the road
        // are not specified the road has 2 lanes each with 1.5 meter width
        width = 2*1.5;
     }
    QPolygonF polygon;
    float width;
};

#endif // ROAD_H
