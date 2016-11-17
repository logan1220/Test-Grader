#include <cstdlib>
#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char *argv[])
{
    const int SIZE = 20;
    char answers[SIZE]= {'B', 'D', 'A', 'A', 'C', 'A', 'B', 'A', 'C', 'D', 'B', 'C', 'D', 'A', 'D', 'C', 'C', 'B', 'D', 'A'};
    char student[SIZE];
    int count = 0;
    int numright=0;
    int numwrong=0;
    
    while(count < SIZE)
    {
        char letter;
        cout<<"Enter the students answer for number "<<count+1<<endl;
        cin>>letter;
        student[count]=letter;
        
        
        if (student[count]!= 'A' && student[count]!= 'B' && student[count]!= 'C' && student[count]!= 'D')
        {
            cout<<"INVALID ENTRY"<<endl;
                                            
        }
        else
        {
            count++;
            }
    }
    
    
    for (int count2 =0; count2 <SIZE; count2++)
    {
        if(answers[count2]==student[count2])
        {
            numright++;
            }
        else
        {
            numwrong++;
            }
        
    }
    cout<<"The student got "<<numright<<" right and "<<numwrong<< " wrong!"<<endl;
    if(numright >= 15)
        {
                    cout<<"The student passed!"<<endl;
                    }
        else
        {
            cout<<"The student failed!"<<endl;
            }

        
    
    
    
    
    
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
