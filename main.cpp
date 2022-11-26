#include <iostream>
using namespace std;

int main()
{
    float a;
    float bok[3];
    while(cin>>a)
    {
        bok[0] = a;
        for(int i=1;i<3;i++)
        {
            cin>>a;
            bok[i] = a;
        }

        while(!((bok[0]<=bok[1])&&(bok[1]<=bok[2])))
        {
           for(int i=0;i<2;i++)
            {   if(bok[i]>bok[i+1])
                {
                    a = bok[i];
                    bok[i] = bok[i+1];
                    bok[i+1] = a;
                }
            }
        }

        if((bok[0]+bok[1])>bok[2]) cout<<"1"<<endl;
        else cout<<"0"<<endl;
    }
    return 0;
}
