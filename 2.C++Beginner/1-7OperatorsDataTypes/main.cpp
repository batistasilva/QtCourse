#include <iostream>

using namespace std;

int main()
{
    int a = 20;
    int b = 20;


    /*
     * //Comment
    cout << "----------Math Operators------------"<<endl;
    cout << "a + b = " << a + b  << endl;
    cout << "a - b = " << a - b  << endl;
    cout << "a * b = " << a * b  << endl;
    cout << "a / b = " << (float) a / b  << endl;
    cout << "a % b = " << a % b  << endl;
      */


  //  cout << "----------Logical Operators------------"<<endl;

    /* >,<,>=,<=,==

      */

    if( a == b)
    {
        cout << "A is equal to b " <<endl;
    }else
    {
        cout << "A is not equal to b" <<endl;
    }



    //For loop
    /*
    for ( int i = 1 ; i <= 20 ; i=i+1)
    {
        cout << "Hello Person"<<i<<endl;
    }
    */


    /*
    int i =1;

    while ( i <= 20)
    {
      cout << "Hello Person"<<i<<endl;
      i=i+1;
    }

    */

    int i = 1;

    do{
        cout << "Hello Person "<<i<<endl;
        i=i+1;
    }while( i <=20);


    //While loop

    return 0;
}
