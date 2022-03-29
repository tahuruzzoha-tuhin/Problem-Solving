#include <bits/stdc++.h>
using namespace std;



int find(string prog[], string dir) {
  for (int i = 0; i< 4; i++) {
    if (prog[i] == dir) {
      return i;
    }
  }
  return -1;
}

int main() {
  
  while (true) {
    int L;
    scanf("%d", &L);
    if (L == 0) {
      break;
    }
    string bends;
    getline(cin, bends); //consume newline
    getline(cin, bends); 
    //printf("read %d %s\n", L, bends.c_str());
    string current = "+x";
    string y_progression[] = {"+x", "+y", "-x", "-y"};
    string z_progression[] = {"+x", "+z", "-x", "-z"};

    for(int i = 0; i< bends.length()-1; i+=3) {
      // i is N or +/-
      // i+1 is y,z
      if (bends[i] == 'N') {
        continue;
      }
      if (bends[i+1] == 'y') {
        //printf("\ty_rotation\n");
        if (current[1] == 'z') {
          continue; // rotating in the y direction when we are z does nothing
        }
        int idx = find(y_progression, current);
        if (bends[i] == '+') {
          idx += 1;
          idx %= 4;
        } else { // -
          idx -= 1;
          if (idx < 0) {
            idx = 3;
          }
        }
        current = y_progression[idx];
      } else { // 'z'
      //printf("\tz_rotation\n");
        if (current[1] == 'y') {
          continue; // rotating in the z direction when we are y does nothing
        }
        int idx = find(z_progression, current);
        if (bends[i] == '+') {
          idx += 1;
          idx %= 4;
        } else { // -
          idx -= 1;
          if (idx < 0) {
            idx = 3;
          }
        }
        current = z_progression[idx];
      }
      // Remember, no +x or -x
    }
    printf("%s\n", current.c_str());
  }
}