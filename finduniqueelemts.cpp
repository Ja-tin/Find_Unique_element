#include <iostream>
#include <vector>
using namespace std;

int findUnique(vector<int> arr)
{
    int ans = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}

int main()
{
    int num;
    cout << "Enter the value you want to put in array:- ";
    cin >> num;
    vector<int> arr(num);
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }
    cout << "Array is:-";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    int uniqueElement = findUnique(arr);
    cout << "Unique element is:- " << uniqueElement << endl;
}
