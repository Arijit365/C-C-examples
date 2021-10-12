 #include<bits/stdc++.h>
using namepace std;

void merge(int arr , int  l , int mid , int  r)
{
    int n1 =  mid-l+1;
    int n2 = r-mid;
    int a[n1];
    int b[n2];
    for (int i = 0; i <= n1; i++)
    {
        a[i] = arr[l+1];
    }
    for (int i = 0; i <= n2; i++)
    {
        b[i] = arr[mid+1+i];
    }
    int i =0;
    int j =0;
    int k = l;
    while (i < n1 && j<n2)
    {
        if( a[i] < b[j])
        {
            arr[k] = a[j];
            k++ , i++
        }
        else
        {
              arr[k] = b[j];
              k++ , i++
        }
        
    }
     while (i < n1)
     {
        arr[k] = a[i];
        k++ , i++;
     }
     while (j < n2)
     {
         arr[k] = b[j];
         k++ , i++;
     }
     
    
}

void mergesort(int arr[] , int l , int mid , int r)
{
    if(l<r)
    {
        int mid = (l + r)/2;
        mergesort(arr , l ,mid);
        mergesort(arr , mid+1 , r);
        merge(arr  , l , mid , r);
    }
}


int main(){
  
      int arr[] = { 5 , 4 , 3 ,2 ,1 };
      mergesort(arr , 0 , 4);
      for (int i = 0; i <= 5; i++)
      {
          cout << arr[i] << " ";
      } 
       std::cout << endl;
      
    return 0 ;

}