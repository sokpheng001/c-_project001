#include<iostream>
#include<vector>
#include<fstream>
#include"utils/uuid_generator.hpp"
#include<unistd.h>
#include "model/user.hpp"

using namespace std;


vector<string> splitString(string &data, char delimiter){
    vector<string> result;
    size_t start = 0;
    size_t end = data.find(delimiter);

    // Loop until no more delimiters are found
    while (end != string::npos) {
        result.push_back(data.substr(start, end - start));  // Extract substring
        start = end + 1;  // Move past the delimiter
        end = data.find(delimiter, start);  // Find the next delimiter
    }

    // Add the last part of the string (after the last delimiter)
    result.push_back(data.substr(start));

    return result;
}



// Function to read user data from the file
void readDataFromUserFile() {
    // Open the file for reading
    ifstream file("./data.txt", ios::in);

    if (!file) {
        cerr << "File is not found\n";
        return;
    }

    // Vector to hold users
    vector<User> users;
    string line;

    // Read each line from the file
    while (getline(file, line)) {
        // cout << "Data after reading: " << line << endl;

        // Split the line into individual fields by comma
        vector<string> data = splitString(line, ',');

        // Ensure there are enough fields to create a User
        if (data.size() < 7) {
            cerr << "Invalid data format: not enough fields\n";
            continue; // Skip this line if there are not enough fields
        }

        try {
            // Convert data to appropriate types and create a User object
            int id = stoi(data[0]);
            bool isDeleted = (data[6] == "1"); // If the 'isDeleted' field is "1", it is true

            users.push_back(User(
                id,
                data[1], // UUID
                data[2], // Name
                data[3], // Email
                data[4], // Password
                data[5], // Created At
                isDeleted
            ));
        } catch (const invalid_argument &e) {
            cerr << "Invalid data format in line: " << line << " (" << e.what() << ")\n";
        } catch (const out_of_range &e) {
            cerr << "Out of range error in line: " << line << " (" << e.what() << ")\n";
        }
    }

    // Print out all users read from the file
    for (User &user : users) {
        user.getUserInfo();
        cout<<"=======================\n";
    }

    // Close the file
    file.close();
}

void writeDataOfUserToFile(User &user){
    ofstream writer("./data.txt", ios::app);
    //

    //
    if(!writer ){
        cout << "File is not found or cannot be opened\n";
        return;
    }else{
        writer<<user.getId()<<", "
        <<user.getUuid()<<", "
        <<user.getName()<<", "
        <<user.getEmail()<<", "
        <<user.getPassword()<<", "
        <<user.getCreatedAt()<<", "
        <<user.getIsDeleted()<<endl;
        cout<<"Write user data to file successfully\n";
    }
    writer.close();
}



int main(){
    readDataFromUserFile();
    return 0;
}