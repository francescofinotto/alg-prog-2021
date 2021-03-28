#ifndef NAIVEALGORITHM_H
#define NAIVEALGORITHM_H
#include <iostream>
#include "BaseRunnableAlgorithm.h"

class NaiveAlgorithm: public BaseRunnableAlgorithm
{
    public:
        /** Default constructor */
        NaiveAlgorithm();
        /** Default destructor */
        virtual ~NaiveAlgorithm();
        void Setup() override
        {
            std::cout<<"Setup"<<std::endl;
        };
        void Execute() override
        {
            std::cout<<"Execute"<<std::endl;
        };
    protected:

    private:
};

#endif // NAIVEALGORITHM_H
