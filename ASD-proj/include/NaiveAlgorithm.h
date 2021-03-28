#ifndef NAIVEALGORITHM_H
#define NAIVEALGORITHM_H
#include <iostream>
#include "BaseRunnableAlgorithm.h"

class NaiveAlgorithm: public BaseRunnableAlgorithm
{
    public:
        /** Default destructor */
        ~NaiveAlgorithm() override { std::cout << "Destroyed Naive Algorithm" << std::endl; }

        /** Default constructor */
        NaiveAlgorithm() { std::cout<<"Created Naive Algorithm"<<std::endl; };
        void Setup() override
        {
            std::cout<<"Setup"<<std::endl;
        };
        void Execute() override
        {
            std::cout<<"Execute"<<std::endl;
        };
        void* GetDataDescriptor() override
        {

        };
    protected:

    private:
        char* text;
};

#endif // NAIVEALGORITHM_H
