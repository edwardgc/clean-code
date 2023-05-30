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

User user;

bool isCountryInTheList(string pos)
{
    return true;
}

bool isAllowedCountry(FlightsForm form)
{
    if (UserType::INTERNAL == user.userType) {
        return isCountryInTheList(form.pos);
    } else {
        return isCountryInTheList(user.pos);
    }
}

} //namespace bad

