
import java.util.*;
import java.io.*;


class Solution{
    
    //Function to return sum of count of set bits in the integers from 1 to n.
    public static int countSetBits(int n){
        int count=0;
        // as we consider 0 to form the pattern so we add 1 to n
        ++n;
        for(int i=0;i<31;i++){
            int xbits=n/(1<<(i+1));
            xbits*=(1<<i);
            count+=xbits;
            if(i<31){
                // remaining bits after 2^(i+1) group
                int ybits=n%(1<<(i+1));
                // removing the num of set bits i of 2^(i+1) group from remaining bits
                ybits=Math.max(0,ybits-(1<<i));
                count+=ybits;
            }
        }
        return count;
    }
    public static int countSetBits2(int n){ 
        // O(NxN)
        int count=0;
        for(int i=1;i<=n;i++){
            int num=i;
            while (num > 0) {
                count++;
                num &= (num - 1);
            }
            // int totalbits=(int)(Math.log(n)/Math.log(2))+1;
            // for(int j=1;j<=totalbits;j++){
            //     int mask=1<<(j-1);
            //     if((mask&i)>=1){
            //         count++;
            //     }
            // }
        }
        return count;
    }
}


class BitsMagic {
	public static void main(String[] args) throws NumberFormatException, IOException {
		Scanner sc=new Scanner(System.in);
		int t=sc.nextInt();//testcases
		int n;
		while(t-->0) {
	        n = sc.nextInt();//input n

		    // Solution obj = new Solution();

		    System.out.println(Solution.countSetBits(n));
            // System.out.println(obj.countSetBits2(n));
		}
        sc.close();
	}
}