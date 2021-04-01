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

            delete text; // remove text from memory

            logger.Log("Destroyed Naive Algorithm");
            }

        /** Default constructor */
        NaiveAlgorithm() { logger.Log("Created Naive Algorithm"); };

        void Setup() override
        {
            StringGenerator generator(std::string("abc/*"),500'000,STRING_GENERATION_ALGORITHM::RANDOM); // gnerator on stack

            text = generator.Generate(); // generate string on heap
            logger.Log("Setup");

        };
        void Execute() override
        {
            logger.Log("Execute");
            logger.Log(text);
        };
        void* GetDataDescriptor() override
        {

        };
    protected:

    private:
        std::string* text;
        Logger logger;
        //BaseDataDescriptor descriptor;
};

#endif // NAIVEALGORITHM_H
