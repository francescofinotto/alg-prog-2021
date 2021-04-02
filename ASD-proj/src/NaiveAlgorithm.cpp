#include "NaiveAlgorithm.h"

bool NaiveAlgorithm::searchPeriod(std::string str, int p)
{
    for(int i=0; i<str.length()-p; i++)
    {
        if(str[i]!=str[i+p])
        {
            return false;
        }
    }
    return true;
}

int NaiveAlgorithm::periodNaive(std::string str)
{
    int p;
    for(p=1; p<str.length(); p++)
    {
        if(searchPeriod(str, p))
        {
            return p;
        }
    }
    return p;
}
