#ifndef PERIODSMART_H
#define PERIODSMART_H

#include <BaseRunnableAlgorithm.h>
#include <StringGenerator.h>

class PeriodSmart : public BaseRunnableAlgorithm
{
    public:
        /** Default constructor */
        PeriodSmart();
        /** Default destructor */
        ~PeriodSmart() override {};
        void Setup() override
        {
            StringGenerator generator(std::string("abc"),10,20, STRING_GENERATION_ALGORITHM::HALF_RANDOM);
            text = generator.Generate();
        };
        void Execute() override {};
        void* GetDataDescriptor() override {};
    protected:

    private:
        std::string text;
};

#endif // PERIODSMART_H
