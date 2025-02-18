import time

# Start the timer
start_time = time.time()

n = 0
while n < 1_000_000_000:
    n += 1

# Stop the timer
end_time = time.time()

# Calculate the duration
duration = end_time - start_time

# Output the result and the time taken
print(f"Final value of n: {n}")
print(f"Time taken: {duration:.4f} seconds")