#include <bits/stdc++.h>
using namespace std;

// bool IsNonBoringArray(vector<int> input_arr)
// {
//     int input_count = input_arr.size();
//     if (!input_count)
//         return true;

//     for (int l = 0; l < input_count; l++)
//     {
//         int current = input_arr[l];
//         for (int r = l + 1; r < input_count; r++)
//         {
//             current ^= input_arr[r];
//             if (!current)
//             {
//                 return false;
//             }
//         }
//     }

//     return true;
// }

int main(int argc, const char *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> input_arr;

    while (cin)
    {
        int in;
        cin >> in;
        input_arr.push_back(in);
    }

    // cout << (IsNonBoringArray(input_arr) ? "true" : "false") << endl;

    return 0;
}