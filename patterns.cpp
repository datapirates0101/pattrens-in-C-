#include <iostream>
#include "patterns.h"

using namespace std;

void pattern1()
{
    for(int i=1; i<=5; i++)
    {
        for(int j=1; j<=5; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    
}

void pattern2()
{
    for(int i=1; i<=5; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

}

void pattern3()
{
    for(int i=1; i<=5; i++)
    {
        for(int j=5-i; j>=0; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern4()
{
    for(int i=1; i<=5; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

void pattern5()
{
    for(int i=1; i<=9; i++)
    {
        if (i<=5)
        {
            for(int j=1; j<=i; j++)
            {
                 cout << "*";
            }
            cout << endl;
        }
        else
        {
            for(int j=9-i; j>=0; j--)
            {
                 cout << "*";
            }
            cout << endl;
        }
      
    }
}

void pattern6()
{
    for(int i=1; i<=5; i++)
    {
        for(int j=i; j<5; j++)
        {
            cout<<" ";
        }

        for(int j=1; j<=i; j++)
        {
            cout<<"*";
        }

        cout << endl;
    }
}

void pattern7()
{
    for(int i=1; i<=5; i++)
    {
        for(int j=1; j<i; j++)
        {
            cout<<" ";
        }

        for(int j=i; j<=5; j++)
        {
            cout<<"*";
        }

        cout << endl;
    }
}

void pattern8()
{
    int x=0;
    for(int i=1; i<=5; i++)
    {
        for(int j=i; j<5; j++)
        {
            cout << " ";
        }

        for(int j=1; j<=i+x; j++)  //or u can remove x and do j<=(2i-1)
        {
            cout << "*";
        }
        
        x++;

        for(int j=i; j<5; j++)
        {
            cout << " ";
        }

        cout << endl;
    }
}

void pattern9()
{
    for(int i=1; i<=5; i++)
    {
        for(int j=1; j<i; j++)
        {
            cout << " ";
        }

        for(int j=1; j<=(2*5)-(2*i-1) ; j++) 
        {
            cout << "*";
        }

        for(int j=1; j<i; j++)
        {
            cout << " ";
        }

        cout << endl;
    }
}
