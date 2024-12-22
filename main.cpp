#include<iostream>
#include<vector>
#include"service/user_service_impl.hpp"
#include"view/table.hpp"

using namespace std;




int main(){
    UserService * service = new UserServiceImpl();
    vector<string> columnNames = {"UUID","NAME","EMAIL","CREATEDAT","IS DELETED"};
    vector<vector<string>> data;
    
    for(int i=0;i<service->getAllUsers().size();i++){
        vector<string> row;
        row.push_back(service->getAllUsers()[i].getUuid());
        row.push_back(service->getAllUsers()[i].getName());
        row.push_back(service->getAllUsers()[i].getEmail());
        row.push_back(service->getAllUsers()[i].getCreatedAt());
        row.push_back(to_string(service->getAllUsers()[i].getIsDeleted()));
        data.push_back(row);
    }
    printTable(data, columnNames);

    return 0; 

}