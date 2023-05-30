#include <string>

using namespace std;

namespace bad
{

enum class UserType
{
    INTERNAL,
    EXTERNAL
};

struct User
{
    UserType userType;
    string pos;
};

struct FlightsForm
{
    string pos;
};

bool isCountryInTheList(const string& pos)
{
    return true;
}

string getPosOfUser(const FlightsForm& form, const User& user) {
    return UserType::INTERNAL == user.userType ? form.pos : user.pos;
}

bool isAllowedCountry(const FlightsForm& form, const User& user)
{
    return isCountryInTheList(getPosOfUser(form, user));
}

} //namespace bad

