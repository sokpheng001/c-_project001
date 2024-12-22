#include<iostream>
#pragma once

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
        //
        string getUuid(){
            return this->uuid;
        }
        string getName(){
            return this->name;
        }
        string getEmail(){
            return this->email;
        }
        string getCreatedAt(){
            return this->createdAt;
        }
        bool getIsDeleted(){
            return this->isDeleted;
        }
        
        
};