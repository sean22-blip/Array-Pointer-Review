#include <iostream>
#include <stdlib.h>
using namespace std;

void input(int *p_arr, int pos, int val, int &n, int size = 10)
{
    if (pos >= size || pos > n)
    {
        cout << "Error!" << endl;
        return;
    }
    for (int i = n; i > pos; i--)
    { // pos = 2, n = 5
        p_arr[i] = p_arr[i - 1];
    }
    p_arr[pos] = val;
    n = (pos < n) ? n : n + 1;
}
void del(int *p_arr, int pos, int &n)
{
    if (pos < 0 || pos > n)
    {
        cout << "Error!" << endl;
        return;
    }
    for (int i = pos; i < n; i++)
    {
        p_arr[i] = p_arr[i + 1];
    }
    n--;
}

int main()
{
    int arr[10] = {5, 4, 3, 2, 1};
    int n = 5;

    input(arr, 2, 10, n);
    // delete the value and the position that it is in
    for (int i = 0; i < n + 1; i++)
    {

        cout << "Value " << i << ": " << arr[i] << endl;
    }
    del(arr, 1, n);
    for (int i = 0; i < n + 1; i++)
    {
        cout << "Value after deleted " << i << ": " << arr[i] << endl;
    }

    return 0;
} // 5, 4, 10, 3, 2, 1
// 5, 10, 3, 2, 1