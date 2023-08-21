import java.util.*;
public class sorting {
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int array[]=new int[n];
        for(int i=0;i<n;i++){
            array[i]=sc.nextInt();
        }
        
        // selectionsort(array);
        // bubblesort(array);
        // insertionsort(array);
        // mergesort(array,0,n-1);
        quicksort(array,0,n-1);

        for(int i : array){
            System.out.print(i+" ");
        }
    }

    static void swap(int array[],int i,int j){
        int temp = array[i];
        array[i]=array[j];
        array[j]=temp;
    }

    static void selectionsort(int[] array){
        int n=array.length,minLength=0;
        for(int i=0;i<n-1;i++){
            minLength=i;
            for(int j=i;j<n;j++){
                if(array[minLength]>array[j]){
                    minLength=j;
                }
            }
            // Swap Fucntion is called just to swap the smallest element;
            if(i!=minLength) swap(array,minLength,i);
        }
    }

    static void bubblesort(int[] array){
        int n=array.length;
        boolean sorted=false;
        for(int i=0;i<n-1;i++){
            sorted=false;
            for(int j=0;j<n-1-i;j++){
                // Last position will have largest element
                if(array[j]>array[j+1]) swap(array,j,j+1);
                sorted=true;
            }
            if(sorted) break;
        }
    }
    static void insertionsort(int[] array){
        int n=array.length;
        for(int i=0;i<n;i++){
            int key=array[i];
            int j=i-1;
            while(j>=0 && array[j]>key){
                array[j+1]=array[j];
                j--;
            }
            array[j+1]=key;
        }
    }

    static void merge(int arr[],int l,int r,int m){
        int l1=m-l+1;
        int l2=r-m;
        int L[]=new int[l1];
        int R[]=new int[l2];
        for(int i=0;i<l1;i++){
            L[i]=arr[i+l];
        }
        for(int i=0;i<l2;i++){
            R[i]=arr[m+1+i];
        }
        int i=0,j=0,k=l;
        while (i < l1 && j < l2) {
            if (L[i] <= R[j]) {
                arr[k++] = L[i++];
            } else {
                arr[k++] = R[j++];
        }
        }
        while(i<l1){
            arr[k++]=L[i++];
        }
        while(j<l2){
            arr[k++]=R[j++];
        }
    }
    
    static void mergesort(int[] array,int l,int r){
        if(l<r){
            int m=(l+r)/2;
            mergesort(array,l,m);
            mergesort(array,m+1,r);
            merge(array,l,r,m);
        }
    }

    static int partition(int [] arr, int low, int high){
        int pivot=arr[low];
        int i=low;
        int j=high;
        while(i<j){
            while(arr[i]<=pivot && i<=high-1){
                i++;
            }
            while(arr[j]>pivot && j>=low-1){
                j--;
            }
            if(i<j) swap(arr,i,j);
        }
        swap(arr,low,j);
        return j;
    }

    static void quicksort(int arr[],int low,int high){
        if(low<high){
            int pivot=partition(arr,low,high);
            quicksort(arr,low,pivot-1);
            quicksort(arr,pivot+1,high);
        }
    }
}