#include "StringGenerator.h"

StringGenerator::StringGenerator(std::string alphabet,int size, STRING_GENERATION_ALGORITHM algorithmType):mAlphabet(alphabet),mSize(size),mAlgorithm(algorithmType)
{
    //ctor
}
StringGenerator::~StringGenerator()
{
    //ctor
}
std::string* StringGenerator::Generate()
{
    switch(mAlgorithm)
    {
        case STRING_GENERATION_ALGORITHM::RANDOM:
            // TODO RandString Algorithm
            return RandomGeneration();
            break;
    }
}
std::string* StringGenerator::RandomGeneration()
{
    std::string* text = new std::string(mSize,'*');
    int textSize = text->size();
    std::string value;
    Logger logger;
    logger.Log(std::to_string(textSize));
    for( int i = 0 ; i < textSize ; i++ )
    {
        value = mAlphabet[ rand() % (mAlphabet.size()) ];
        text->replace(i,1,value);
    }
    return text;
}
