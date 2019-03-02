#include <bits/stdc++.h>
using namespace std;

int main() {
  int i = 0;
  int N;
  cin >> N;

  int sum = 0;

  while (i < N) {
    int x;
    cin >> x;
    sum += x;

    i++;
  }

  cout << sum << endl;
}
