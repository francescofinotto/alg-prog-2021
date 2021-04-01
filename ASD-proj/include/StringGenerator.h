#ifndef STRINGGENERATOR_H
#define STRINGGENERATOR_H

#include <string>
#include <memory>

#include "Logger.h"

enum STRING_GENERATION_ALGORITHM {RANDOM};
class StringGenerator
{
    public:

        /** Default constructor */
        StringGenerator(std::string alphabet,int size, STRING_GENERATION_ALGORITHM algorithmType);
        ~StringGenerator();
        std::string* Generate();
    protected:

    private:
        std::string* RandomGeneration();
        std::string mAlphabet;
        int mSize;
        STRING_GENERATION_ALGORITHM mAlgorithm;
};

#endif // STRINGGENERATOR_H
