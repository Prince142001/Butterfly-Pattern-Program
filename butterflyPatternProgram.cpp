#include<iostream>

using namespace std;

int main(void){
    for (int  i = 1; i <= 6; i++)
    {
        for (int j = 1; j <= i; j++)
        {
                cout<<"* ";
                system("color 1");
        }
            int space=2*6-2*i;
            for (int j = 1; j <= space; j++)
            {
                cout<<"  ";
                system("color 2");
            }
            for (int j = 1; j <= i; j++)
        {
                cout<<"* ";
                system("color 3");
        }
        cout<<endl;
    }
    for (int i = 5; i >=1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<"* ";
                system("color 3");
        }
        int space=2*6-2*i;
        for (int j = 1; j <= space; j++)
        {
            cout<<"  ";
                system("color 2");

        }
        for (int j = 1; j <= i; j++)
        {
            cout<<"* ";
                system("color 1");
        }
    cout<<endl;   
    }
}