#include<iostream>
#include<stack>
using namespace std;

void stockspan(int stock[], int span[], int n) {
    stack<int> s;
    span[0] = 1;
    s.push(0);

    for (int i = 1; i < n; i++) {
        int curr = stock[i];
        while (!s.empty() && curr > stock[s.top()]) {
            s.pop();
        }
        if (s.empty()) {
            span[i] = i + 1;
        } else {
            int prev = s.top();
            span[i] = i - prev;
        }
        s.push(i);
    }
}

int main() {
    int stocks[] = {100, 80, 60, 70, 60, 85, 100};
    int n = sizeof(stocks) / sizeof(stocks[0]);
    int *span = new int[n];
    cout<<sizeof(stocks)<<"--->"<<sizeof(stocks[0])<<endl;

    stockspan(stocks, span, n);

    for (int i = 0; i < n; i++) {
        cout << span[i] << "-->";
    }

    delete[] span; // deallocate the memory allocated with 'new'

    return 0;
}
