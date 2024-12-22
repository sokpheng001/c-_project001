#include<iostream>
#include<vector>

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

