#ifndef LOGGER_H
#define LOGGER_H

#include <iostream>
#include <string>
/**
*
*   Logger utility used to log to std out
*
*/
class Logger
{
    public:
        /** Default constructor */
        Logger();
        /** Default destructor */
        virtual ~Logger();
        void Log( std::string message );
        void Log( std::string* message );
    protected:

    private:
};

#endif // LOGGER_H
