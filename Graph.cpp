#include <iostream>
using namespace std;

class graph
{
private:
    bool **adjmatrix;
    int vertices;

public:
    graph(int v)
    {
        vertices = v;
        adjmatrix = new bool*[vertices];

        for (int i = 0; i < vertices; i++)
        {
            adjmatrix[i] = new bool[vertices];

            for (int j = 0; j < vertices; j++)
            {
                adjmatrix[i][j] = false;
            }
        }
    }

    void display()
    {
        for (int i = 0; i < vertices; i++)
        {
            for (int j = 0; j < vertices; j++)
            {
                cout << adjmatrix[i][j] << " ";
            }
            cout << endl;
        }
    }
    void addedge(int i, int j)
    {
        adjmatrix[i][j] = true;
        adjmatrix[j][i] = true; 
    }
};

int main()
{
    graph g(6);
    g.display();
    g.addedge(0, 1);
    g.addedge(0, 2);
    g.addedge(1, 3);
    g.addedge(2, 3);
    g.addedge(3, 4);
    g.addedge(4 ,5);
    cout << "After adding edges:" << endl;
    g.display();
    return 0;
}