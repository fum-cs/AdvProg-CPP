import time

# Start the timer
start_time = time.time()



for i in range(10_000):
    L = []
    for j in range(1_000):
        L.append(j)

# L = []
# for j in range(10_000_000):
#     L.append(j)

# Stop the timer
end_time = time.time()

# Calculate the duration
duration = end_time - start_time

# Output the result and the time taken
# print(f"Final value of n: {n}")
print(f"Time taken: {duration:.4f} seconds")