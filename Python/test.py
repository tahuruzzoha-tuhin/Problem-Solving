#---------------------- USER DEFINED INPUT FUNCTIONS ----------------------#
def inp():
    return(int(input()))
def inlt():
    return(list(map(int,input().split())))
def insr():
    return(input().strip())

 
#------------------ USER DEFINED PROGRAMMING FUNCTIONS ------------------#def inp():


def main():
    # global tt
    # if not ONLINE_JUDGE:
    #     sys.stdin = open("input.txt","r")
    #     sys.stdout = open("output.txt","w")
    # t = 1
    # t = inp()
    # for tt in range(1,t + 1):
        # print(tt)
    n = int(input())
    for i in range(0,n):
        print(i)
    # if not ONLINE_JUDGE:
    #     print("Time Elapsed :",time.time() - start_time,"seconds")
    #     sys.stdout.close()


# ONLINE_JUDGE = __debug__
# if ONLINE_JUDGE:
#     import io,os
#     input = io.BytesIO(os.read(0,os.fstat(0).st_size)).readline
#     #input = sys.stdin.readline 
main()