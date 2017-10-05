#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <algorithm>

using namespace std;

int bsearch (int arrayForSsearch[], int numberForSearch, int arraySize)
{
     for(int i=0; i<arraySize; i++)
     {
         if (numberForSearch > arrayForSsearch[i]) {
            return i;
            break;
        }
     } 
}

int main(){
    const int x = 40;
    const int arraySize = 10;
    
   srand(time(0));
    int array[arraySize]={};
    for (int i=0; i<arraySize; i++)
        {
            array[i]=rand()%100;
        }
    
   for(int i = 0; i < arraySize - 1; ++i)
    {            
       for(int j = 0; j < arraySize - 1; ++j)
        {    
            if (array[j + 1] > array[j])
            {
                int temp = array[j + 1];
                array[j + 1] = array[j];
                array[j] = temp;
            }
        }
    }
    
   int result = bsearch(array, x, arraySize);
    cout<< result;
    return 0;
    }
