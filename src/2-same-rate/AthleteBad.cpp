
namespace bad
{

class Athlete
{
public:
    Athlete(int i, int h, int w, int xPos, int yPos)
        : id(i), hight(h), weight(w), x(xPos), y(yPos)
    {}

    void setPosision(int xPos, int yPos)
    {
        x = xPos;
        y = yPos;
    }

private:
    int id;
    int hight;
    int weight;
    int x;
    int y;
};

} //namespace bad
