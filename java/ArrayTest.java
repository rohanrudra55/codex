import java.io.*;

class ArrayTest{
    public static void swap(int arr[]){
        int temp=arr[0];
        arr[0]=arr[1];
        arr[1]=temp;
    }
    public static void display(int arr[]){
        for( int i : arr){
            System.out.println(i);
        }
    }

    public static void main(String args[]){
        int arr[]={1,2,3,4};
        display(arr);
        swap(arr);
        display(arr);
    }
}