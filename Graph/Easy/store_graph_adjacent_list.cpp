#include "iostream"
#include "vector"
using namespace std;

int main()
{
    int n, m;
    cin>>n>>m;

    vector<int> arr[n+1];

    for(int i=0; i<m; i++)
    {
        int u, v;
        cin>>u>>v;

        arr[u].push_back(v);
        arr[v].push_back(u);
    }

    for(int i=0; i<=n; i++)
    {
        // cout<<arr[i].size()<<"  ";
        for(int num : arr[i])
        {
            cout<<num<<", ";
        }
        cout<<endl;
    }
    cout<<endl;

    return 0;
}



output - 

vijay-patidar@vijaypatidar-Vostro-3501:~/vishal_bhai/DSA-Practice-vishal8236/Graph/Easy$ ./outfile 
4 4 //get vertices and edge
1 2
1 3
2 4
3 4

2, 3, 
1, 4, 
1, 4, 
2, 3, 

