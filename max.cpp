#include <iostream>
#include <vector>

void get_vector(std::vector<std::string>& vec){
    std::string phrase;
    while(std::cin>> phrase){
        vec.push_back(phrase);
    }
    
}

int main() {
   
    
    return 0;
}
