#include<iostream>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while(t--)
  {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
      cin >> arr[i];
    }
    int count = 0;
    for(int i = 0; i < n; i++)
    {
      if(arr[i] == 0)
      {
        count++;
      }

    }
    for(int i = 0; i < n; i++)
    {
      if(i < count)
      {
        arr[i] = 0;
      }
      else
      {
        arr[i] = 1;
      }
    }
    for(int i = 0; i < n; i++)
     {
       cout << arr[i] << " ";
     } cout << endl;
  }
}
