#include <iostream>
#include "dictionary.h"

int main(){
    Dictionary dic("words.txt");
    dic.suggest("car", 10);
    std::cout << std::endl;
    dic.suggest("adf", 10);
        std::cout << std::endl;
    dic.suggest("as", 10);
        std::cout << std::endl;
    dic.suggest("ah", 10);
        std::cout << std::endl;
    dic.suggest("zach", 10);
        std::cout << std::endl;
    dic.suggest("asdklfhlkjasdfkjhadglkjsdfjksdf", 10);
    std::cout << std::endl;
    
    
}
