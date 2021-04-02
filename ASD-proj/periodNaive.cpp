#include <iostream>
#include <chrono>

#include <NaiveAlgorithm.h>
#include <PeriodSmart.h>

using namespace std;

#define A 1000
#define B 1.0647//859778233493

enum ALGORITHM_TYPES : int {PERIOD_NAIVE = 0,PERIOD_SMART = 1};

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
    unsigned int size{500'000};

    int period {0};

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
            algorithm = new PeriodSmart();
            break;
        }
        default:
            break;
    }


    auto start = std::chrono::high_resolution_clock::now();
    algorithm->Setup();
    auto end = std::chrono::high_resolution_clock::now();
    double delta = std::chrono::duration<double,std::milli>(end-start).count();
    std::cout <<"Delta time = "<< std::to_string(delta) <<std::endl;


        // insert start rec time
        //algorithm->Execute();

    // end rec time

    // save data

    // free
    delete algorithm;

    return 0;
}
