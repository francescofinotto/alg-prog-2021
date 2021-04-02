#include <iostream>
#include <NaiveAlgorithm.h>

using namespace std;

#define A 1000
#define B 1.0647//859778233493

enum ALGORITHM_TYPES : int {PERIOD_NAIVE=0,PERIOD_SMART=1};

int main()
{
    string str;
    ALGORITHM_TYPES selectedAlgorithm {0};
    // cin >> str;
    // int p = periodNaive(str);
    // cout << p;

    // select algorithm
    BaseRunnableAlgorithm* algorithm;
    unsigned int seed {1};
    unsigned int size{100};
    int period {0};
    do{

        switch(selectedAlgorithm)
        {
            case ALGORITHM_TYPES::PERIOD_NAIVE:
            {
                algorithm = new NaiveAlgorithm(size,seed);
                break;
            }
            case ALGORITHM_TYPES::PERIOD_SMART:
            {
                // add algorithm here
                break;
            }
            default:
                break;
        }


        algorithm->Setup();

        // insert start rec time
        algorithm->Execute();
        period = ((NaiveAlgorithm*)algorithm)->Period;
        std::cout << "Period = "
                  << period
                  << " Seed = "
                  << seed
                  << endl;
        seed++;
        size++;
        delete algorithm;
    }while(!(period < size/2));
    // end rec time

    // save data

    // free
    delete algorithm;

    return 0;
}
