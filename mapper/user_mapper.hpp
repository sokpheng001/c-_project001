#include<iostream>
#include"../model/user_response.hpp"
#include"../model/user.hpp"
#pragma once
class UserMapper{
    public:
        UserResponse mapFromUserToUserResponse(User user){
            return UserResponse(user.getUuid(), user.getName(), user.getEmail(), user.getCreatedAt(), user.getIsDeleted());
        }
};