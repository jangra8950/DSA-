
#include<conio.h>
#include<iostream>
using namespace std;
int findmax(int a[],int n)
{
    int m=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]>m)
            m=a[i];
    }
    return m;
}
void count(int c[],int n, int place)
{
    int i,j;
    int output[n];
    int p[10]={0};
    for(i=0;i<n;i++)
        p[(c[i]/place)%10]++;
    for(i=0;i<10;i++)
        p[i]=p[i]+p[i-1];
    for (i = n- 1; i >= 0; i--)
    {
        output[p[(c[i] / place) % 10] - 1] = c[i];
        p[(c[i] / place) % 10]--;
    }
     for (int i = 0; i < n; i++)
    c[i] = output[i];

}
void radixsort(int array[], int size) {
  // Get maximum element
  int max = findmax(array, size);

  // Apply counting sort to sort elements based on place value.
  for (int place = 1; max / place > 0; place *= 10)
    count(array, size, place);
}
void display(int b[],int n)
{
    int i;
    for(i=0;i<n;i++)
        cout<<b[i]<<endl;
}
int main()
{
    int i,n,k;
    cout<<" enter the size of the array ";
    cin>>k;
    int a[k];
    cout<<" how many no you want to sort   ";
    cin>>n;
    cout<<" enter"<<n<< "numbers ";
    for(i=0;i<n;i++)
    cin>>a[i];
    cout<< " sorted array is ";
    radixsort(a,n);
    display(a,n);
    getch();
}
