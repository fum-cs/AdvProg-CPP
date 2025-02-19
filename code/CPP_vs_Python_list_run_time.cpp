#include <iostream>
#include <chrono> // Include the chrono library for timing

using namespace std;
using namespace std::chrono; // Use the chrono namespace for convenience

int main()
{
    // Start the timer
    auto start = high_resolution_clock::now();
    int A[1'000];
    for (int i = 0; i < 10'000; i++)
        for(int j = 0; j < 1'000; j++)
            A[j] = j;

    // Danger: Stack overflow
    // int A[10'000'000];
    // for(int j = 0; j < 10'000'000; j++)
    //      A[j] = j;

    // Stop the timer
    auto stop = high_resolution_clock::now();

    // Calculate the duration
    auto duration = duration_cast<milliseconds>(stop - start);

    // Output the time taken
    cout << "Time taken: " << duration.count() << " milliseconds" << endl;

    return 0;
}