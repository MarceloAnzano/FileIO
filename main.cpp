#include <iostream>
#include<fstream>
#include<string>
#include<sstream>

using namespace std;

int main()
{
    int x =0 ,c = 0, n;
    int numbers[10000];
    string line;
    fstream myfile;
    myfile.open("data10k.txt");
    while(myfile.good())
    {
        getline(myfile,line);
        stringstream(line)>>numbers[c];
        c++;
    }

    //Laman ng Array
    /*for(c = 0; c<10000; c++)
    {
        cout<<numbers[c]<<endl;
    }*/

   for( n=0;n<10000;n++)
    {
        if(numbers[n]>x)
            {
                x = numbers[n];
            }
    }
    cout<<x;
    myfile.close();

    return 0;
}
