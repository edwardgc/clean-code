namespace bad
{

class Callback
{
public:
    void onConnect()
    {
        count++;
    }

    void onReconnect()
    {
        count++;
    }

    void onShutdown()
    {
        count--;
    }

    void onDisconnect()
    {
        count--;
    }

private:
    int count;
};

} //namespace bad
