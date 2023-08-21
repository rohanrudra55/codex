import java.util.Arrays;

class basicarray{
    static void display(int arr[]){
        System.out.print("Array: ");
        for(int i=0;i<arr.length;i++){
            System.out.print(arr[i]+" ");
        }
        System.out.println();
    }
    public static void main(String args[]){
        int arr1[]=new int[5];
        display(arr1);

        int arr[]={1,2,3,4,5};
        Arrays.sort(arr);
        display(arr);

        Arrays.fill(arr,10);
        display(arr);

        System.out.println(Arrays.toString(arr));
    }
}

/*
    * Output:
 * Array: 0 0 0 0 0 
 * Array: 1 2 3 4 5 
 * Array: 10 10 10 10 10 
 * [10, 10, 10, 10, 10]
 */