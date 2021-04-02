#ifndef PERIODSMART_H
#define PERIODSMART_H

#include <BaseRunnableAlgorithm.h>


class PeriodSmart : public BaseRunnableAlgorithm
{
    public:
        /** Default constructor */
        PeriodSmart();
        /** Default destructor */
        ~PeriodSmart() override {};
        void Setup() override {};
        void Execute() override {};
        void* GetDataDescriptor() override {};
    protected:

    private:
};

#endif // PERIODSMART_H
