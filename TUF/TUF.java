import java.util.*;

class TUF {
    int binarysearch(int arr[], int n, int k) {
        int left=0,right=n-1;

        while(left<right){
            int mid=left+right/2;
            if(k>arr[mid])
                left=mid+1;
            else if(k<arr[mid])
                right=mid;
            else
                return mid-1;
        }
        return -1;
    }
}