/*Write a program to copy the contents of one 
array into another in the reverse order.*/
#include<iostream>
#include<vector>
using namespace std;
int main(void)
{
    vector<int> v;
    int size;
    cout << "Enter the size of the vector : ";
    cin >> size;
    for (int i = 0; i < size;i++)
    {
        int x;
        cout << "Enter the element " << i + 1 << " : ";
        cin >> x;
        v.push_back(x);
        cout << endl;
    }
    vector<int> v1(v.size())\;
    for (int i = 0; i < v1.size();i++)
    {
        int temp, j = v.size() - 1;
        temp = v[j];
        v1[i] = v[i];
    }
}