#include "../std_lib_facilities.h"

vector<int> gv {1,2,4,8,16,32,64,128,256,512};

int f(vector<int> vec)
{
    vector<int> lv(vec.size());

    cout << '\n';
    for (int i = 0; i<vec.size(); i++)
    {
        lv[i] = gv[i];
        cout << lv[i] << ' ';
    }
    cout << '\n';

    vector<int> lv2 = vec;
    for (int i = 0; i<vec.size(); i++)
    {
        cout << lv2[i] << ' ';
    }
}

int main()
{
    f(gv);

    vector<int> vv {1,2,6,24,120,720,7*720,56*720,9*56*720,90*56*720};
    f(vv);

    return 0;
}
