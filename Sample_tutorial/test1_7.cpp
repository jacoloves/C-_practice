#include <iostream>
using namespace std;

int main() {
  int p, price;
  string text;
  cin >> p;
  

  if (p == 1) {
    cin >> price;
  }

  if (p == 2) {
    cin >> text >> price;
  }

  int N;
  cin >> N;

  cout << text << endl;
  cout << price * N << endl;
}
