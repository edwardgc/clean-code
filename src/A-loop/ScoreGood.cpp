namespace good
{

int ratingIncrement = 0;
int scoreIncrement = 0;
int targetScore = 100;

void getNextRating(int &ratingIncrement)
{
}

void getNextScore(int &scoreIncrement)
{
}

void rate()
{
    int score = 0;
    int rating = 0;
    while (true)
    {
        getNextRating(ratingIncrement);
        rating = rating + ratingIncrement;
        if (!(score < targetScore) && (ratingIncrement == 0))
        {
            break;
        }
        getNextScore(scoreIncrement);
        score = score + scoreIncrement;
    }

}

} //namespace good
