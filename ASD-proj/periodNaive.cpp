#include <iostream>
#include <NaiveAlgorithm.h>

using namespace std;

#define A 1000
#define B 1.0647//859778233493

bool searchPeriod(string str, int p)
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

int periodNaive(string str)
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

int main()
{
    // string str;
    // cin >> str;
    // int p = periodNaive(str);
    // cout << p;

    // select algorithm

    NaiveAlgorithm algorithm = NaiveAlgorithm();

    algorithm.Setup();


    // insert start rec time
    algorithm.Execute();
    // end rec time

    // save data

    return 0;
}
