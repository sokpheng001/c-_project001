#include<iostream>
#pragma once
using namespace std;



class User{
    private:
        int id;
        string uuid;
        string name;
        string email;
        string password;
        string createdAt;
        bool isDeleted;
    public:
        ~ User(){cout<<"Deconstructor is called\n";}
        User(){}
        User(int id, string uuid, string name, string email, string password, string createdAt, bool isDeleted){
            this->id = id;
            this->uuid = uuid;
            this->name = name;
            this->email = email;
            this->password = password;
            this->createdAt = createdAt;
            this->isDeleted = isDeleted;
        }
        //
        int getId(){
            return this->id;
        }
        string getUuid(){
            return this->uuid;
        }
        string getName(){
            return this->name;
        }
        string getEmail(){
            return this->email;
        }
        string getPassword(){
            return this->password;
        }
        string getCreatedAt(){
            return this->createdAt;
        }
        bool getIsDeleted(){
            return this->isDeleted;
        }
        //
        void setId(int id){
            this->id = id;
        }
        void setUuid(string uuid){
            this->uuid = uuid;
        }
        void setName(string name){
            this->name = name;
        }
        void setEmail(string email){
            this->email = email;
        }
        void setPassword(string password){
            this->password = password;
        }
        void setCreatedAt(string createdAt){
            this->createdAt = createdAt;
        }
        void setIsDeleted(bool isDeleted){
            this->isDeleted = isDeleted;
        }
        //
        void getUserInfo(){
            cout<<"id: "<<id<<endl;
            cout<<"uuid: "<<uuid<<endl;
            cout<<"name: "<<name<<endl;
            cout<<"email: "<<email<<endl;
            cout<<"password: "<<password<<endl;
            cout<<"createdAt: "<<createdAt<<endl;
            cout<<"isDeleted: "<<isDeleted<<endl;
        }
};