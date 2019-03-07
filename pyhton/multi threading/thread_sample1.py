import threading

results = [];

def worker(n):
    j = 0
    for i in range(n):
        j = (j+(i%7))%7
    results.append(j)
    


threads = []
for i in range(5):
    t = threading.Thread(target=worker, args=(i*10000000,))
    threads.append(t)
    t.start()


print 'threads started'

for i in range(5):
    threads[i].join()
    print 'thread', i, 'finished'


print 'all finished'

