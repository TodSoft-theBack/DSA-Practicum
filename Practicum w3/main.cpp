#include <iostream>
#include <vector>
#include "rotatedArray.h"

int main()
{
    std::vector<int> nums = {4,5,6,7,0,1,2};
    int targed = 0;
    std::cout << Search(nums, targed) << std::endl;
    return EXIT_SUCCESS;
}