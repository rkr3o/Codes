#include<bits/stdc++.h>
using namespace std ;

#define endl "\n"
#define ll long long int
const int mod = 1e9 + 7;

const int N = 1e5 + 10;
void bubbleSort(int n , vector<int>&v)
{
   bool swapped;
   int cnt = 0;
   for (int i = 0; i < n - 1; ++i)
   {
      swapped = false;
      for (int j = i + 1; j < n ; ++j)
      {
         if (v[i] > v[j])
         {
            cnt++;
            swap(v[i], v[j]);

            swapped = true;
         }
      }

      if (swapped == false)break;
   }

}
void selectionSort(int n , vector<int>&v)
{
   for (int i = 0; i < n - 1; ++i)
   {
      int mini = i;
      for (int j = i + 1  ; j < n ; j++)
      {
         if (v[j] < v[mini])
         {
            mini = j;
         }
      }

      if (mini != i)
      {
         swap(v[i], v[mini]);
      }
   }
}
void InsertionSort(int n , vector<int>&v)
{
   for (int i = 1; i < n - 1; ++i)
   {
      int key = v[i];
      int j = i - 1;

      while (key<v[j] and j >= 0)
      {
         v[j + 1] = v[j];
         j--;
      }

      v[j + 1] = key;
   }
}

int binarySearch(vector<int>&v , int key , int l , int h)
{


   while (l <= h)
   {
      int mid = l + (h - l) / 2;
      if (key == v[mid])mid + 1;
      else if (key < v[mid])h = mid - 1;
      else l = mid + 1;
      return l ;
   }
}
void binaryInsertionSort(int n , vector<int>&v)
{
   for (int i = 1; i < n - 1; ++i)
   {
      int key = v[i];
      int j = i - 1;

      int ans = binarySearch(v, key, 0, j);

      while (j >= ans)
      {
         v[j + 1] = v[j];
         j--;
      }

      v[j + 1] = key;
   }
}
void printArrar(vector<int>&v)
{
   for (auto x : v)
   {
      cout << x << " ";
   }
   cout << endl;
}
int main()
{

   int n ;
   cin >> n ;
   vector<int>v(n);
   for (int i = 0; i < n; ++i)
   {
      cin >> v[i];
   }
   bool swapped ;
   int cnt = 0;

//selectionSort(n, v);
   binaryInsertionSort(n, v);
   //selectionSort(n, v);
   printArrar(v);

   //bubbleSort(n, v, cnt);

   cout << cnt << endl;
   return 0 ;
}
