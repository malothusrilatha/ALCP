#include <iostream>
#include <unordered_set>
using namespace std;
int main()
{
    int n;
    int arr[100];
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    unordered_set<int> s;
    for (int i = 0; i < n; i++)
    {
        s.insert(arr[i]);
    }
    int longest = 0;
    for (int i = 0; i < n; i++)
    {
        if (s.find(arr[i] - 1) == s.end())
        {
            int current = arr[i];
            int length = 1;
            while (s.find(current + 1) != s.end())
            {
                current++;
                length++;
       		 }
            if (length > longest)
            {
                longest = length;
            }
        }
    }
    cout << "Longest consecutive sequence length: " << longest;
    return 0;
}
