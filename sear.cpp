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
    int array[n];
    int find;
    cin >> find;

  for(int i = 0; i < n; i++)
    {
      cin >> array[i];
    }

int found = 0;

  for(int i = 0; i < n; i++)
    {
     if(array[i] == find)
     {
       cout << i+1;
       found++;
       break;


     }

    }
  if(found == 0){
    cout << -1;
  }

  }
}
