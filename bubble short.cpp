#include <iostream>
using namespace std;

  buublesort(int array[], int n){

  int step,cmpr;
  for (step=0; step<n-1; step++)
    for(cmpr=0; cmpr<n-step-1; cmpr++)
    if(array[cmpr]>array[cmpr+1])
       swap(array[cmpr], array[cmpr+1]);

  }

int main()
{
    int n,i;
    cout <<"Enter the array size: ";
    cin >> n;
    int array[n];
    cout<<"Enter array element: ";
    for(i=0; i<n; i++)
      array[i]= rand() % 50;

    cout<<"unsorted array element: ";
    for(i=0; i<n; i++)
       cout<<array[i]<<" ";

     /*  buublesort(array,n);

       cout<<"\nSorted array element: ";
         for(i=0; i<n; i++)
           cout<<array[i]<<" ";*/
}
