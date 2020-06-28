#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime>
using namespace std;
int main()
{
    int walks = 10000, steps = 100, a;
    float dis = 0, dis2 = 0;
    srand(time(NULL));

    for (int walk=0; walk<walks; walk++){
        int x = 0;
        for (int step=0; step<steps; step++){
            a = rand()%2;
            if (a){x += 1;}
            else {x -= 1;}
        }
        dis += x;
        dis2+= x*x;
    }
    cout<<"average : "<<dis/walks<<endl
    <<"standard deviation : "<< sqrt(dis2/walks - dis/walks*dis/walks);


}
