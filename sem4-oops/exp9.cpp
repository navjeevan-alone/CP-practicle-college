#include <iostream>

template <typename T, size_t N>
T findMin(const T (&arr)[N])
{
    T minVal = arr[0];
    for (size_t i = 1; i < N; ++i)
    {
        if (arr[i] < minVal)
        {
            minVal = arr[i];
        }
    }
    return minVal;
}

int main()
{
    int intArr[] = {5, 3, 7, 1, 9};
    double doubleArr[] = {2.5, 1.3, 4.7, 0.9, 3.2};

    int minInt = findMin(intArr);
    double minDouble = findMin(doubleArr);

    std::cout << "Minimum value in intArr: " << minInt << std::endl;
    std::cout << "Minimum value in doubleArr: " << minDouble << std::endl;

    return 0;
}
