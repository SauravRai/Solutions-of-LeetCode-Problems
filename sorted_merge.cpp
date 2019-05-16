/******************************************************************************
C++ program to merge two unsorted arrays and sort them
Assumption: The array consists of integer values.
Time Complexity: [nlogn(from the sort function) + n + m] where n and m are the size of the first and second array
**********************************************************/
#include<iostream>
using namespace std;
#define MAXSIZ 1000
#include<algorithm>

void display(int arr[], int );
void merge(int arr1[], int arr2[], int , int );
int main()
  {
      int arr1[MAXSIZ], arr2[MAXSIZ];
      int size1, size2;
      cout<<"Enter the size of the first array: "<<endl;
      cin>>size1;
      cout<<"Enter the elements of the first array"<<endl;
      for(int i=0;i<size1;i++)
      {
       cin>>arr1[i];
      }

      cout<<"Enter the size of the second array: "<<endl;
      cin>>size2;
      cout<<"Enter the elements of the second array"<<endl;
      for(int j=0;j<size2;j++)
      {
       cin>>arr2[j];
      }
     merge(arr1,arr2,size1,size2);

    return 0;
  }

void display(int arr[], int n)
 {
     for(int i=0;i<n;i++)
         cout<<arr[i]<<" ";
 }

void merge(int arr1[], int arr2[], int n, int m)
   {
     int newLen = n+m;
     int newArray[newLen];
     int i = 0;
     int j = 0;
     int k = 0;
     while(i<n)
       {
         newArray[k] = arr1[i];
         i++;
         k++;
       }
     while(j<m)
       {
         newArray[k] = arr2[j];
         j++;
         k++;
       }
     sort(newArray,newArray+newLen);
     display(newArray, newLen);
   }
