# include <iostream>
using namespace std;

int main() 
{
    int x,y,i,j;
    cout<<"rows-";
    cin>>x;
    cout<<"column-";
    cin>>y;
    int mat[x][y];
    for ( i=0;i<x;i++)
    {
      for ( j=0;j<y;j++)
      {
        cout<<"\ns["<<i<<"]["<<j<<"]=  ";
        cin>>mat[i][j];
      } 
    }
     for ( i=0;i<x;i++)
     {
        for ( j=0;j<y;j++)
        {
           cout<<mat[i][j];
           cout<<"  ";
           
        }
        cout<<endl;
     }
}
