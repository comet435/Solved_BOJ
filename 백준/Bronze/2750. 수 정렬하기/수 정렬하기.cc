# include <iostream>
using namespace std;


void bubbleSort (int* data, int n)
{
    int temp = 0;

    for (int i = n-1; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (data[j] > data[j+1])
            {
                temp = data[j];
                data[j] = data[j+1];
                data[j+1] = temp;
            }
        }
    }
}

int main(void)
{
    int n = 0;
    int *data = NULL;

    cin >> n;
    data = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> data[i];
    }

    bubbleSort(data, n);

    for (int i = 0; i < n; i++)
    {
        if (i > 0)
        {
            cout <<" ";
        }
        cout << data[i];
    }

    delete[] data;

    return 0;
}