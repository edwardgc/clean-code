struct Point
{
    int x;
    int y;
};

namespace good
{

class Athlete
{
public:
    Athlete(int i, int h, int w, const Point &p)
        : id(i), hight(h), weight(w), position(p)
    {}

    void setPosision(const Point &p)
    {
        position = p;
    }

private:
    int id;
    int hight;
    int weight;
    Point position;
};

} //namespace good

