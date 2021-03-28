#ifndef BASERUNNABLEALGORITHM_H
#define BASERUNNABLEALGORITHM_H


class BaseRunnableAlgorithm
{
    public:
        /** Default constructor */
        BaseRunnableAlgorithm();
        /** Default destructor */
        virtual ~BaseRunnableAlgorithm() = 0;
        virtual void Setup() = 0;
        virtual void Execute() = 0;
        virtual void* GetDataDescriptor() = 0;
    protected:

    private:
};

#endif // BASERUNNABLEALGORITHM_H
