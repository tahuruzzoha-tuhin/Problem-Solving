"""**************************************************************\
                   BISMILLAHIR RAHMANIR RAHIM
****************************************************************
               AUTHOR NAME: MD. TAHURUZZOHA TUHIN
\**************************************************************"""


def palindrome(S):
    n = len(S)
    f = False
    for i in range(n):
        if(S[i] == S[n-i-1]):
            f = True
    return f


for _ in range(int(input())):

	a,b=map(int,input().split())
	s=input()
	n=a+b
    
    # Str = s
	s=list(s)
	flag=0
	for i in range(n):
		
		if s[i]=='?':
			s[i]=s[n-i-1]

	a-=s.count('0')
	b-=s.count('1')

	for i in range(n//2+1):
		if i!=n-i-1 and s[i]=='?':

			if a>1:
				s[i]='0'
				s[n-i-1]='0'
				a-=2

			elif b>1:
				s[i]='1'
				s[n-i-1]='1'
				b-=2

		elif s[i]=='?':

			if a>0:
				s[i]='0'
				a-=1

			elif b>0:
				s[i]='1'
				b-=1

	if a==0 and b==0 and s==s[::-1]:
		s=''.join(s)
		print(s)

	else:
		print('-1')
    
    # print(palindrome(Str))