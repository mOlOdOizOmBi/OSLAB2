#include <iostream>
#include <ctime>


#include "allocator.h"
using namespace std;

int main()
{
    Allocator alloc;

    // srand(time(NULL));
    // int test_amount = 100;
    // int mem_alloc_amount = 10;
    // int max_mem = 1024;
    // int bad_tests = test_amount;

    // for (int test = 0; test < test_amount; test++) {
    //     void *mem[mem_alloc_amount];

    //     for (int i = 0; i < mem_alloc_amount; i++) {
    //         int size = rand() % max_mem;
    //         mem[i] = alloc.alloc(size);
    //     }

    //     for (int i = 0; i < mem_alloc_amount; i++) {
    //         alloc.free(mem[i]);
    //     }
    //     if (alloc.test()) {
    //         bad_tests--;
    //     }
    // }
    // cout << "Runned " << test_amount << endl;
    // if (bad_tests == 0) {
    //     cout << "All tests are correct." << endl;
    // }
    // else {
    //     cout << bad_tests << " tests was bad!" << endl;
    // }



    cout << alloc.dump() << endl;

    cout << "Allocating memory for x variable..." << endl;
    int *x = (int *) alloc.alloc(4);
    cout << alloc.dump() << endl;

    cout << "Assign x to 5..." << endl;
    *x = 5;
    cout << "X variable consist " << *x << endl;

    cout << "Free memory that was allocated for x..." << endl;
    alloc.free(x);

    cout << alloc.dump() << endl;
    return 0;
}
