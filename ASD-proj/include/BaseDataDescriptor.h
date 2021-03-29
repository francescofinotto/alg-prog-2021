#ifndef BASEDATADESCRIPTOR_H
#define BASEDATADESCRIPTOR_H


class BaseDataDescriptor
{
    public:
        /** Default constructor */
        BaseDataDescriptor();
        /** Default destructor */
        virtual ~BaseDataDescriptor();
        int seed;
        int size;
        long time;
    protected:

    private:
};

#endif // BASEDATADESCRIPTOR_H
