# bool isPal(string s) {
#     int i = 0, j = s.size() - 1;
#     while(i <= j) {
#         if(s[i] != s[j])return false;
#         ++i, --j;
#     }
#     return true;
# }

def isPal(s):
    i = 0
    j = len(s)-1
    while i <= j:
        if (s[i] != s[j]):
            return False
        i += 1
        j -= 1
    return True

