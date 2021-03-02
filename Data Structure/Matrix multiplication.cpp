#include<iostream>
using namespace std;
int main()
{
    int matrix1[10][10],matrix2[10][10];
    int row1,row2,colm1,colm2;

    while(2)
    {
    cout<<"enter row and column of matrix1"<<endl;
    cin>>row1>>colm1;
    cout<<"enter row and column of matrix2"<<endl;
    cin>>row2>>colm2;
    if(colm1==row2)
        break;
    else
        cout<<" Invalid input "<<endl;
    }
     cout<<"Enter matrix 1"<<endl;
    for(int i=1; i<=row1; i++)
        for(int j=1; j<=colm1; j++)
            cin>>matrix1[i][j];

    cout<<"Enter matrix 2"<<endl;
    for(int i=1; i<=row2; i++)
        for(int j=1; j<=colm2; j++)
            cin>>matrix2[i][j];

  int sum;
  cout<<"multiplication of matrix1 and matrix2 is"<<endl;
  for(int i=1;i<=row1;i++)
  {
      for(int j=1;j<=colm2;j++)
      {
          sum=0;
          for(int k=1;k<=colm1;k++)
              sum+=matrix1[i][k]*matrix2[k][j];
          cout<<sum<<" ";
      }
      cout<<endl;
  }
}
