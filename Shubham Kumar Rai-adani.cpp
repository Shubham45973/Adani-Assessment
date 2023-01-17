#include <bits/stdc++.h>

using namespace std;

int create(int a, int b){

    int rows = a;
    int cols = b;
    int arr[rows][cols];

    for (int i=0; i<rows; i++)
        for (int j=0; j<cols; j++)
            arr[i][j] = 1 + (rand() % 500);

    cout << "The rows of random 2d array are: " << rows << " and columns are: " << cols << endl;
    cout << "Random 2d array generated is:" << endl;

}

int sortcolumn(int arr[rows][cols])
{
  for (int i = 0; i < cols; i++)
    sort(cols[i], cols[i] + rows);

  for (int i = 0; i < cols; i++)
  {
    for (int j = 0; j < rows; j++)
      cout << (cols[i][j]) << " ";
    cout << endl;
  }
}


int main()
(
int a, b;
cin>>a>>b;
       for (int i=0; i<rows; i++){
        for (int j=0; j<cols; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }
    return 0;
)
