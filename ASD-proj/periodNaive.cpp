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

typedef enum ALGORITHM_TYPES:int {PERIOD_NAIVE=0,PERIOD_SMART=1};

int main()
{
    string str;
    ALGORITHM_TYPES selectedAlgorithm {0};
    // cin >> str;
    // int p = periodNaive(str);
    // cout << p;

    // select algorithm
        { // Scope of algorithm
            BaseRunnableAlgorithm* algorithm;
            switch(selectedAlgorithm)
            {
                case ALGORITHM_TYPES::PERIOD_NAIVE:
                {
                    algorithm = new NaiveAlgorithm();
                    break;
                }
                case ALGORITHM_TYPES::PERIOD_SMART:
                {

                    break;
                }
                default:
                    break;
            }


            algorithm->Setup();

            // insert start rec time
            algorithm->Execute();
            // end rec time

            // save data

            // free
            delete algorithm;
        }
    return 0;
}
