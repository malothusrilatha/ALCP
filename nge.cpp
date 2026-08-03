 #include <iostream>
#include <stack>
#include <vector>
using namespace std;
int main() {
    int a[]={4,5,2,10,8};
    vector<int>arr(a,a+5);
    int n = arr.size();
    vector<int> nge(n, -1);
    stack<int> st;
    for (int i = n - 1; i >= 0; i--) {
        while (!st.empty() && st.top() <= arr[i]) {
            st.pop();
        }
        if (!st.empty()) {
            nge[i] = st.top();
        }
        st.push(arr[i]);
    }
    cout << "Next Greater Elements:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " --> " << nge[i] << endl;
    }
    return 0;
}
