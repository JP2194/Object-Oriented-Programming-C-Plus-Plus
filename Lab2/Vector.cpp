#include <iostream>
#include <vector>
using namespace std;

/**
 * @brief prints the elements in the vector and their memory locations
 * 
 * @param v - vector of intergers
 * 
**/

void printMemVec(vector<int> v, int size)
{
    printf("Vector - Each int is worth %lu bytes\n", sizeof(v[0]));
    for (int i = 0; i < size; i++)
    {
        printf("Value:%i at Memory Location:%p\n", v[i], &v[i]);
    }
}

void incVecBy10(vector<int> &v,int size)
{
    for (int i = 0; i < size; i++)
    {
        v[i] += 10;
    }
}

int main()
{
    const int SIZE = 5;
    vector<int> vec(SIZE);
    for (int i = 0; i<SIZE; i++)
    {
        vec[i] = i + 100;
    }

    printf("Before Increment-------\n");
    printMemVec(vec,SIZE);
    incVecBy10(vec,SIZE);

    printf("After Increment-------\n");
    printMemVec(vec,SIZE);
    vec.pop_back();


    printf("After Pop-------\n");
    printMemVec(vec,SIZE);
    vec.push_back(101);
    vec.push_back(102);

    printf("After Push-------\n");
    printMemVec(vec,SIZE);

    return 0;
}