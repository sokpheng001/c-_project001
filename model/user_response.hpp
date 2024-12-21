#include<iostream>

using namespace std;
class UserResponse{
    private:
        string uuid;
        string name;
        string email;
        string createdAt;
        bool isDeleted;
    public:
        UserResponse(string uuid, string name, string email, string createdAt, bool isDeleted){
            this->uuid = uuid;
            this->name = name;
            this->email = email;
            this->createdAt=createdAt;
            this->isDeleted = isDeleted;
        }
        UserResponse(){}
        
};