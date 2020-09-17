// first transpose matrix

// then interchange as per clockwise or anti clockwise
#include<iostream>
using namespace std;
int main()
{
  int n; //size of matrix
  cin >> n;
  int matrix[n][n];

  for(int i = 0; i < n; i++)
  {
      for(int j = 0; j < n; j++)
      {
      cin >> matrix[i][j];
    }
  }

  cout << endl;


for(int i = 0; i < n; i++) //printing original matrix
{
  for(int j = 0; j < n; j++){
    cout << matrix[i][j] << " ";
  }
  cout << endl;
}
cout << endl << endl;

//code for roating the matrix

//transpose
for(int i = 0; i < n; i++)
{
  for(int j = i; j < n; j++)
  {
    int temp = matrix[i][j];
    matrix[i][j] = matrix[j][i];
    matrix[j][i] = temp;
  }
}

//print the transposed matrix

for(int i = 0; i < n; i++)
{
  for(int j = 0; j < n; j++){
    cout << matrix[i][j] << " ";
  }
  cout << endl;
}

cout << endl << endl;


//to rotate we must interchange the sides either columnwise or row wise based upon the rotation
//clockwise
for(int i = 0; i < n; i++)
{
  for(int j = 0; j < n/2; j++)
  {
    int temp = matrix[i][j];
    matrix[i][j] = matrix[i][n - 1 - j];
    matrix[i][n - 1 - j] = temp;
  }
}
for(int i = 0; i < n; i++)
{
  for(int j = 0; j < n; j++){
    cout << matrix[i][j] << " ";
  }
  cout << endl;
}

cout << endl << endl;

//for anti-clockwise
for(int j = 0; j < n; j++)
{
  for(int i = 0; i < n/2; i++)
  {
    int temp = matrix[i][j];
    matrix[i][j] = matrix[n - i - 1][j];
    matrix[n - i - 1][j] = temp;
  }
}

for(int i = 0; i < n; i++)
{
  for(int j = 0; j < n; j++){
    cout << matrix[i][j] << " ";
  }
  cout << endl;
}

}
