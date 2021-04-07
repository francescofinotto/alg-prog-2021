#include "StringGenerator.h"

StringGenerator::StringGenerator(std::string alphabet,unsigned int size,unsigned int seed, STRING_GENERATION_ALGORITHM algorithmType): mAlphabet(alphabet),mSize(size),mSeed(seed),mAlgorithm(algorithmType)
{
    //ctor
}
StringGenerator::~StringGenerator()
{
    //ctor
}
std::string StringGenerator::Generate()
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
std::string StringGenerator::RandomGeneration()
{
    char* txt = new char[mSize];
    int alphabetSize = mAlphabet.size();
    srand(mSeed);
    for( int i = 0 ; i < mSize ; i++ )
    {

        txt[i] = mAlphabet[ rand() % (alphabetSize) ];
    }
    std::string text(txt,mSize);
    return text;
}
std::string StringGenerator::HalfRandomGeneration()
{
    char* txt = new char[mSize];
    int alphabetSize = mAlphabet.size();
    srand(mSeed);
    for( int i = 0 ; i < mSize/2 ; i++ )
    {

        txt[i] = mAlphabet[ rand() % (alphabetSize) ];
        txt[(mSize/2)+i] = txt[i];

    }
    std::string text(txt,mSize);
    return text;
}

