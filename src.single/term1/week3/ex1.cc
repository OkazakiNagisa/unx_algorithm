#include <bits/stdc++.h>
using namespace std;

tuple<int, int> GetModeWithFreq(vector<int> input_arr)
{
    if (input_arr.empty())
        return make_tuple(0, 0);

    int mode, count = 0, freq = 0;

    for (int i = 0, size = input_arr.size(); i < size; i++)
    {
        if (input_arr[i] == mode)
        {
            count++;
            freq++;
        }
        else if (count)
        {
            count--;
        }
        else
        {
            mode = input_arr[i];
            count = 1;
            freq = 1;
        }
    }

    return make_tuple(mode, freq);
}

int main(int argc, const char *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> input_arr = {1, 2, 3, 3, 3, 3, 4, 4, 5};

    // while (cin)
    // {
    //     int in;
    //     cin >> in;
    //     input_arr.push_back(in);
    // }

    auto [mode, freq] = GetModeWithFreq(input_arr);

    cout << format("mode: {}, freq: {}", mode, freq) << endl;

    return 0;
}