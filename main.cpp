#include <iostream>
using namespace std;

void OutRight(int **a, int m, int n,bool mode,int npos)
{
        int i, j;

        cout << std::endl;
        for (i = 0; i < m; i++)
        {
            for (j = n-npos; j < n; j++)
                cout << a[j][i] << " ";
            for (j = 0; j < n-npos; j++)
                cout << a[j][i] << " ";
            cout << std::endl;
        }

}
void OutDown(int **a, int m, int n,bool mode,int npos)
{
        int i, j;

        cout << std::endl;
        for (i = m-npos; i < m; i++)
        {
            for (j = 0; j < n; j++){
                cout << a[j][i] << " ";
            }
            cout << std::endl;
        }
        for (i = 0; i < m-npos; i++)
        {
            for (j = 0; j < n; j++)
                cout << a[j][i] << " ";
            cout << std::endl;
        }


}
int main()
{
    int m, n, i, j,npos;
    bool mode;
    cout << "Enter number of strings and columns"<<std::endl;
    cin >> n >> m;
    cout << "Enter "<< m*n<<" Values"<<std::endl;
    
    int **a = new int *[m]; 
    for (i = 0; i < m; i++)
        a[i] = new int[n];

    for (i = 0; i < m; i++) 
        for (j = 0; j < n; j++)
            cin >> a[i][j];

    cout << "Switch move 0 - down 1 - right"<< std::endl;
    cin >> mode;
    cout << "Enter pos number to move"<<std::endl;
    cin >> npos;
    if (mode){
        npos=npos%m;
        OutRight(a, n, m, mode, npos);
    }else{
        npos=npos%n;
        OutDown(a, n, m, mode, npos);
    }

    cin >> npos; 
}
   
