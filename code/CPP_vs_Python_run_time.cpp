#include <iostream>
#include <chrono> // Include the chrono library for timing

using namespace std;
using namespace std::chrono; // Use the chrono namespace for convenience

int main()
{
    // Start the timer
    auto start = high_resolution_clock::now();

    int n = 0;
    while (n < 1'000'000'000)
        n++;

    // Stop the timer
    auto stop = high_resolution_clock::now();

    // Calculate the duration
    auto duration = duration_cast<milliseconds>(stop - start);

    // Output the result and the time taken
    cout << "Final value of n: " << n << endl;
    cout << "Time taken: " << duration.count() << " milliseconds" << endl;

    return 0;
}