import threading

def func_1(counts):
    for i in range(0, counts):
        print("task1\n")

def func_2(counts):
    for i in range(0, counts):
        print("task2\n")

if __name__ == "__main__":

    #create threads
    t1 = threading.Thread(target=func_1, args=(5,))
    t2 = threading.Thread(target=func_2, args=(5,))

    #start thread 1
    t1.start()
    #start thread 2
    t2.start()
    
    #wait for thread 1 to finis execution
    t1.join()

    #wait for thread 2 to finis execution
    t2.join()

    print("finished")