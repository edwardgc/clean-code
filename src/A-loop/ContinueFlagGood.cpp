namespace good
{

class File
{
public:
    bool endOfFile()
    {
        return true;
    }
    void readLine(int content)
    {

    }
};

void conintue(File &inputFile, int content, int expectedLine)
{
    while (!inputFile.endOfFile())
    {
        inputFile.readLine(content);
        if (content == expectedLine)
        {
            break;
        }
    }
}

} //namespace good
