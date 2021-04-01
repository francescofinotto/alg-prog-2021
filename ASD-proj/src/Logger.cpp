#include "Logger.h"

Logger::Logger()
{
    //ctor
}

Logger::~Logger()
{
    //dtor
}
void Logger::Log(std::string message)
{
    #ifdef DEBUG
    std::cout<<message<<std::endl;
    #endif // DEBUG
}
void Logger::Log(std::string* message)
{
    #ifdef DEBUG
    std::cout<<(*message)<<std::endl;
    #endif // DEBUG
}
