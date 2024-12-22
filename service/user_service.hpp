#include<string>
#include"../model/user_response.hpp"
#include"../model/user.hpp"
#include<vector>
using namespace std;

class UserService{
    public:
        virtual vector<UserResponse> getAllUsers() =0;
        virtual bool deleteUserByUuid(string uuid) = 0;
        virtual UserResponse getUserByUuid(string uuid) = 0;
        virtual UserResponse createUser(User user) = 0;
};