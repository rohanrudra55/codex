
from tqdm import tqdm
from time import sleep
import threading


def pro():
    for i in tqdm(range(0, 100), desc="Text You Want"):
        sleep(10)


t1 = threading.Thread(target=pro)
t2 = threading.Thread(target=pro)
t1.start()
# starting thread 2
t2.start()

# wait until thread 1 is completely executed
t1.join()
# wait until thread 2 is completely executed
t2.join()
