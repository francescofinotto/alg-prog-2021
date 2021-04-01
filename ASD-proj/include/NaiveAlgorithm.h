#ifndef NAIVEALGORITHM_H
#define NAIVEALGORITHM_H

#include "BaseRunnableAlgorithm.h"
#include "Logger.h"

class NaiveAlgorithm: public BaseRunnableAlgorithm
{
    public:
        /** Default destructor */
        ~NaiveAlgorithm() override { logger.Log("Destroyed Naive Algorithm"); }

        /** Default constructor */
        NaiveAlgorithm() { logger.Log("Created Naive Algorithm"); };

        void Setup() override
        {
            logger.Log("Setup");
        };
        void Execute() override
        {
            logger.Log("Execture");
        };
        void* GetDataDescriptor() override
        {

        };
    protected:

    private:
        char* text;
        Logger logger;
        //BaseDataDescriptor descriptor;
};

#endif // NAIVEALGORITHM_H
