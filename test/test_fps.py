import time, sys, argparse
from unrealcv import client
client.connect()

class FPSCounter:
    def __init__(self):
        self.start_index = 0
        self.start_time = time.time()

    def tick(self, current_index):
        current_time = time.time()
        if (current_time - self.start_time > 1):
            print '%d fps' % (current_index - self.start_index)
            self.start_index = current_index
            self.start_time = current_time

cmds = [
    'vget /unrealcv/echo hello',
    'vget /camera/0/lit lit.png',
    'vget /camera/0/depth depth.exr',
    'vget /camera/0/location',
    'vget /camera/0/rotation',
] # Commands for evalution


# Run each command for 30 seconds and get the fps
def run_command(cmd):
    start_time = time.time()
    # run this command for 30 seconds
    runtime = 30
    max_iter = 10e6
    for i in range(max_iter):
        cur_time = time.time()
        if cur_time - start_time > runtime:
            # terminate
            counter.tick
    pass

def main():
    print 'Run command %s' % args.cmd
    counter = FPSCounter()
    n_iter = 1000000
    for i in range(n_iter):
        counter.tick(i)
        client.request(args.cmd)


if __name__ == '__main__':
    main()
