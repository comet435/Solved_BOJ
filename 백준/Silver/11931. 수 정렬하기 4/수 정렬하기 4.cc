
# include "iostream"
# include "algorithm"
using namespace std;
bool cmp(int x, int y)
{
    if(x < y)
        return 0;
    return 1;
}

int main()
{
    int num = 0;
    cin >> num;

    int arr[num];

    for ( int i = 0;i < num; ++i)
    {
        cin >> arr[i];
    }
    sort(arr, arr+num, cmp);
    for(int i = 0;i < num;++i)
    cout << arr[i] << '\n';
    return 0;

}