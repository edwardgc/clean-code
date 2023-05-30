
namespace good
{

class Callback
{
public:
    void onOnline()
    {
        count++;
    }

    void onOffline()
    {
        count--;
    }

private:
    int count;
};
} //namespace good
