#include<string>
#include<iostream>

enum log_level_t{
    ERROR,
    WARN,
    INFO
};

std::string lvl;

void print(log_level_t level,std::string msg){
   if(level==0){
    lvl="ERROR";
   } 
    std::cout << lvl<<msg<<std::endl ;

}