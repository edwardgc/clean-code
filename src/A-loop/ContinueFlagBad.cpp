namespace bad
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
    bool shouldContinue = true;
    while (!inputFile.endOfFile() && !shouldContinue)
    {
        // do the work of the loop
        inputFile.readLine(content);
        if (content == expectedLine)
        {
            shouldContinue = false;
        }
    }
}

} //namespace bad
