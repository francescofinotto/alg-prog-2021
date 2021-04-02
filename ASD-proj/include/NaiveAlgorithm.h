#ifndef NAIVEALGORITHM_H
#define NAIVEALGORITHM_H

#include <string>

#include "BaseRunnableAlgorithm.h"
#include "Logger.h"
#include "StringGenerator.h"

class NaiveAlgorithm: public BaseRunnableAlgorithm
{
    public:
        /** Default destructor */
        ~NaiveAlgorithm() override {

             // remove text from memory

            logger.Log("Destroyed Naive Algorithm");
            }

        /** Default constructor */
        NaiveAlgorithm(): mSize(100), mSeed(17'450'777), Period(0) { logger.Log("Created Naive Algorithm"); };

        NaiveAlgorithm(unsigned int size, unsigned int seed): mSize(size), mSeed(seed), Period(0) { logger.Log("Created Naive Algorithm"); };

        void Setup() override
        {
            StringGenerator generator(std::string("ab"),mSize,mSeed,STRING_GENERATION_ALGORITHM::RANDOM); // gnerator on stack

            text = generator.Generate(); // generate string on heap
            logger.Log("Setup");
            logger.Log(text);
        };


        void Execute() override
        {
            logger.Log("Execute");
            logger.Log(text);
            Period = periodNaive(text);
        };


        void* GetDataDescriptor() override
        {

        };

        int Period;
        std::string GetText();
    protected:

    private:

        bool searchPeriod(std::string str, int p);
        int periodNaive(std::string str);
        unsigned int mSeed;
        unsigned int mSize;
        std::string text;
        Logger logger;

        //BaseDataDescriptor descriptor;
};

#endif // NAIVEALGORITHM_H
