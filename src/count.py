import time

start = time.time()
for _ in range(1, 1000001):
    pass
end = time.time()
print("Time elapsed in counting to 1,000,000 is:", (end - start) * 1000, "ms")
