#ifndef USER_H
#define USER_H

#include <string>
using namespace std;
class User
{
public:
    User();
private:
    string displayName;
    string email;
    string id;
    string href;
    string imagesUrl[];
    string product;
    string type;
    string uri;

};

#endif // USER_H
