def delay(n):
    j = 0
    for i in range(n):
        j = (j+(i%7))%7
    return j


from multiprocessing.pool import ThreadPool
pool = ThreadPool(processes=3)

async_result1 = pool.apply_async(delay, (1000001,)) # tuple of args for foo
async_result2 = pool.apply_async(delay, (1000006,)) # tuple of args for foo

# do some other stuff in the main process

return_val1 = async_result1.get()  # get the return value from your function.
return_val2 = async_result2.get()  # get the return value from your function.

return_val1+return_val2
