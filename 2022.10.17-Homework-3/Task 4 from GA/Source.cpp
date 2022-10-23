#include<iostream>

int main(int argc, char* argv[])
{
    int n = 0;
    std::cin >> n;
    int i = 0;
    do
    {
        int j = 0;
        do
        {
            std::cout << j + 1 + i << " ";
            ++j;
        } while (j < n);
        ++i;
    } while (i < n);
    return EXIT_SUCCESS;
}