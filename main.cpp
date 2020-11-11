//Определить местоположение элементов массива А (30), не встречающихся в массиве В (15)

#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    int A[30], B[15];
    bool found;
    srand(time(NULL));   //инициализируем генератор случайных чисел

    printf("mas A:\n");
    for(int i=0; i<30; i++)
    {
        A[i]=rand() % 50;   //заполняем массив А числами от 0...50
        printf("%2d ",A[i]);
    }
    printf("\nmas B:\n");

    for(int i=0; i<15; i++)
    {
        B[i]=rand() % 50;   //заполняем массив Б числами от 0...50
        printf("%2d ",B[i]);
    }
    printf("\n\n");

     for(int i=0; i<30; i++)        //проходим по каждому элементу массива А
     {
         found=false;               // переменная Встречался=0

         for (int j=0; j<15;j++)    // проходим по каждому элементу массива Б
         {
             if(A[i]==B[j])         //если элементы равны, значит элемент A[i] встречается в массиве Б
             {
                 found=true;        // указываем, что он встречался нам
                 break;
             }
         }
         if(!found)                 // если не встречался, выводим элемент A[i] на экран
         printf("A[%d] = %d ne vstrechalsya v B[]\n", i, A[i]);

     }
     getch();

}
