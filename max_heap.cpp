
#include <iostream>

using namespace std;

void maxHeapify(int *a, int i, int n)
{
int j, temp;
temp = a[i];
j = 2 * i;
while (j <= n)
{
if (j < n && a[j + 1] > a[j])
j = j + 1;
if (temp > a[j])
break;
else if (temp <= a[j])
{
a[j / 2] = a[j];
j = 2 * j;
}
}
a[j / 2] = temp;
return;
}
void buildMaxHeap(int *a, int n)
{
int i;
for (i = n / 2; i >= 1; i--)
{
maxHeapify(a, i, n);
}
}
int main()
{
int n, i, x;
cout << "enter no of elements :\n";
cin >> n;
int a[20];
for (i = 1; i <= n; i++)
{
cout << "enter element-" << (i) << " : "<<endl;
cin >> a[i];
}
buildMaxHeap(a, n);
cout << "\n\n***Max Heap***\n";
for (i = 1; i <= n; i++)
{
cout <<" "<< a[i];
}
cout << endl;

}
