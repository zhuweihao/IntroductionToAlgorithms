#include <iostream>
#include <vector>
using namespace std;

int insertsort(vector<int> &A);

int main()
{
    int length;
    vector<int> A;
    // vector<int>::iterator a = A.begin();
    cout << "请输入要排序的数字个数：";
    cin >> length;
    cout << "请逐个输入要排序的数：" ;
    for (int i = 0; i < length; i++)
    {
        int x;
        cin >> x;
        A.push_back(x);
    }
    insertsort(A);
    for (int i = 0; i < length; i++)
    {
        cout << A[i] << " " ;
    }
}
int insertsort(vector<int> &A)
{
    for (int j = 1; j < A.size(); j++)
    {
        int key = A[j];
        int i = j - 1;
        while (i >= 0 && A[i] > key)
        {
            A[i + 1] = A[i];
            i--;
        }
        A[i + 1] = key;
    }
    return 1;
}