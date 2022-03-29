"""**************************************************************\
                   BISMILLAHIR RAHMANIR RAHIM
****************************************************************
               AUTHOR NAME: MD. TAHURUZZOHA TUHIN
\**************************************************************"""


# Python program to illustrate the use
# of fast Input / Output
import io, os, time, sys

# n = input()
# Function for Fast Input
def fast_io():
	input = io.BytesIO(os.read(0, os.fstat(0).st_size)).readline
	s = input().decode()


def fast_out(n):
    sys.stdout.write(str(n)+"\n")

      

# Driver Code
if __name__ == "__main__":
    n = fast_io()
    # fast_out('dd')
    print(n)