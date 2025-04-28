#include "code.hpp"

int main(){
    std::cout<<"enter number of passgers"<<std::endl;
    int num_pass = 0;
    int count_mass = 0;
    int count_quantity = 0;
    std::cin>>num_pass;
    Luggage** arr = new Luggage*[num_pass];
    for(int i;i<num_pass;i++){
        int quantity;
        int mass;
        std::cout<<"enter quantity"<<std::endl;
        std::cin>>quantity;
        std::cout<<"enter mass"<<std::endl;
        std::cin>>mass;
        arr[i] = new Luggage(quantity,mass);
        count_mass = count_mass + mass;
        count_quantity = count_quantity + quantity;
    }
    std::cout<<"enter m"<<std::endl;
    int m;
    std::cin>>m;
    std::cout<<"enter N"<<std::endl;
    int N;
    std::cin>>N;
    
    //del
    for (int i = 0; i < num_pass; ++i) {
        delete arr[i];
    }
    delete[] arr;
}