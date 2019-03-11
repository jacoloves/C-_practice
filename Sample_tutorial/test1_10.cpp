#include <bits/stdc++.h>
using namespace std;

int main() {

  int N, A;
  cin >> N >> A;

  int c[6];
  char d[6];
  
  char a;
  int b;
  for (int i = 0; i < N; i++) {
    cin >> a >> b;

    c[i] = b;
    d[i] = a;
    
  }

  for (int i = 0; i < N; i++) {
    if (d[i] == '+') {
      cout << i+1 << ":" << (A += c[i]) << endl;
    } else if (d[i] == '-') {
      cout << i+1 << ":" << (A -= c[i]) << endl;
    } else if (d[i] == '*' ) {
      cout << i+1 << ":" << (A *= c[i]) << endl;
    } else if (d[i] == '/') {
      if (c[i] == 0) {
        cout << "error" << endl;
        break;
      }
      cout << i+1 << ":" << (A /= c[i]) << endl;
    }
  }

}


