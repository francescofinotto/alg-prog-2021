#ifndef STRINGGENERATOR_H
#define STRINGGENERATOR_H

#include <string>
#include <memory>

#include "Logger.h"

enum STRING_GENERATION_ALGORITHM {RANDOM,HALF_RANDOM};
class StringGenerator
{
    public:

        /** Default constructor */
        StringGenerator(std::string alphabet,unsigned int size,unsigned int seed, STRING_GENERATION_ALGORITHM algorithmType);
        ~StringGenerator();
        std::string Generate();
    protected:

    private:
        std::string RandomGeneration();
        std::string HalfRandomGeneration();
        std::string mAlphabet;
        unsigned int mSize;
        unsigned int mSeed;
        STRING_GENERATION_ALGORITHM mAlgorithm;
};

#endif // STRINGGENERATOR_H
