// aggregation 
#include<iostream>
#include<vector>

using namespace std;
#pragma once;

class Student{};
class Teacher{
    private:
        vector<Student> students;
};
// association 
class Room{};
class Renter{
    private:
        Room room;
};
// Dependency
class UserRepository{};
class UserService{
    private:
        UserRepository repo;
    public:
        void deleteUser(int id){}
};
// Composition
class Brain{};
class Human{
    private:
        Brain *brain;
    public:
        Human(){
            this->brain = new Brain();
        }
};