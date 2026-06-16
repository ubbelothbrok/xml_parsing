#include "../include/utils.h"
#include<string>
#include<iostream>


std::string lvl;

void print(log_level_t level,std::string msg){
   if(level==0){
    lvl="ERROR";
   } 
    std::cout << lvl<<msg<<std::endl ;

}
