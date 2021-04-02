#include "StringGenerator.h"

StringGenerator::StringGenerator(std::string alphabet,unsigned int size,unsigned int seed, STRING_GENERATION_ALGORITHM algorithmType): mAlphabet(alphabet),mSize(size),mSeed(seed),mAlgorithm(algorithmType)
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
        case STRING_GENERATION_ALGORITHM::HALF_RANDOM:
            // TODO RandString Algorithm
            return HalfRandomGeneration();
            break;
    }
}
std::string* StringGenerator::RandomGeneration()
{
    std::string* text = new std::string(mSize,'*');
    int textSize = text->size();
    std::string value;

    srand(mSeed);
    for( int i = 0 ; i < textSize ; i++ )
    {
        value = mAlphabet[ rand() % (mAlphabet.size()) ];
        text->replace(i,1,value);
    }
    return text;
}
std::string* StringGenerator::HalfRandomGeneration()
{
    std::string* text = new std::string(mSize,'*');
    int textSize = text->size();
    std::string value;

    srand(mSeed);
    for( int i = 0 ; i < (textSize/2) ; i++ )
    {
        value = mAlphabet[ rand() % (mAlphabet.size()) ];
        text->replace(i,1,value);
    }
    for( int i = (textSize/2),j=0 ; i < (textSize) ; i++,j++ )
    {
        value = text->at(j);
        text->replace(i,1,value);
    }
    return text;
}

