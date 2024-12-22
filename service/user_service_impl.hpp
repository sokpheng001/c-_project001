#include"user_service.hpp"
#include"../repository/user_repo.hpp"
#include"../mapper/user_mapper.hpp"
#include"../model/user.hpp"

class UserServiceImpl: public UserService{
    private:
        UserMapper * userMapper = new UserMapper();
        UserRepository * userRepository = new UserRepository();
    public:
        vector<UserResponse> getAllUsers() override {
            vector<UserResponse> userReponses;
            for(User u:  userRepository->readDataFromUserFile()){
                userReponses.push_back(userMapper->mapFromUserToUserResponse(u));
            }
            return userReponses; 
        }
        
        bool deleteUserByUuid(string uuid) override{return 0;};
        UserResponse getUserByUuid(string uuid) override{return UserResponse();};
        UserResponse createUser(User user) override{return UserResponse();};
};