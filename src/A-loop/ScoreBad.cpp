
namespace bad
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
    getNextRating(ratingIncrement);
    rating = rating + ratingIncrement;
    while((score < targetScore) && (ratingIncrement == 0))
    {
       getNextScore(scoreIncrement);
       score = score + scoreIncrement;
       getNextRating(ratingIncrement);
       rating = rating + ratingIncrement;
    }
}

} //namespace bad
