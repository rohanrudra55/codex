import java.math.BigInteger;
import java.util.*;

class practice{
    static int solution(int n,int m){
        int div=0,notdiv=0;
        for(int i=1;i<=m;i++){
            if(i%n!=0) notdiv+=i;
            else div+=i;
        }

        return notdiv-div;
    }

    static int LargeSmallSum(int arr[])
    {
        if(arr.length<=3) return 0;
        Arrays.sort(arr);
        if((arr.length-1)%2==0)
            return arr[3]+arr[arr.length-3];
        return arr[3]+arr[arr.length-4];
    
    }

    static int ProductSmallestPair(int sum,int arr[]){
        if(arr.length<2) return -1;
        Arrays.sort(arr);
        
        if(arr[0]+arr[1]<=sum)
            return arr[0]*arr[1];
        return 0;
    }

    static int NumberOfCarries(int num1 , int num2){
        int count=0;
        int carry=0;
        while(num1!=0 && num2!=0)
        {
            int sum=carry+num1%10+num2%10;
            
            if(sum>9) carry=1;
            else      carry=0;
            count+=carry;
            
            if(num1!=0) num1/=10;
            if(num2!=0) num2/=10;
        }

        return count;
    }

    static String generateNumber()
    {
        StringBuilder sb =new StringBuilder();
        for(int i=0;i<10;i++)
        {
            sb.append((int)(Math.random()*10));
        }
        return sb.toString();
    }

    static void modulo(String str)
    {
        BigInteger value=new BigInteger(str);
        value.mod(BigInteger.valueOf(11));
        System.out.println(value.toString());
    }
    static int[] merge(int arr1[],int arr2[])
    {
        int ans[]=new int[arr1.length+arr2.length];
        int n=arr1.length;
        int m=arr2.length;
        int i=0,j=0,c=0;
        while(i<n &&  j<m)
        {
            if(arr1[i]<arr2[j])
            {
                ans[c++]=arr1[i++];
            }
            else if(arr1[i]==arr2[j])
            {
                ans[c++]=arr1[i++];
                j++;
            }
            else
            {
                ans[c++]=arr2[j++];
            }
        }
        while(i<n)
        {
            ans[c++]=arr1[i++];
        }
        while(j<m)
        {
            ans[c++]=arr2[j++];
        }
        return ans;
    }

    static String ChatFrequentcharacter(String str, char x)
    {
        Map<Character,Integer> frq=new HashMap<>();
        char frqchar='\0'; int max=0;
        for(char c : str.toCharArray())
        {
            if(frqchar == '\0') frqchar =c;
            frq.put(c,frq.getOrDefault(c, 0)+1);
            if(frq.get(c)>max)
            {
                frqchar=c;
                max=frq.get(frqchar);
            }
            // System.out.println(c+" - "+frq.get(c)+" - "+frqchar+max);

        }
        
        str= str.replace(frqchar, x);
        return str;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        // Q1 https://prepinsta.com/accenture-coding-question-1/
        // int n=sc.nextInt();
        // int m=sc.nextInt();
        // System.out.println(solution(n,m));

        // Q2 https://prepinsta.com/accenture-coding-question-2/
        // int n=sc.nextInt();
        // int array[]=new int[n];
        // for(int i=0;i<n;i++)
        // {
        //     array[i]=sc.nextInt();
        // }
        // System.out.println(LargeSmallSum(array));

        // Q3 https://prepinsta.com/accenture-coding-question-3/
        // int sum=sc.nextInt();
        // int n=sc.nextInt();
        // int array[]=new int[n];
        // for(int i=0;i<n;i++)
        // {
        //     array[i]=sc.nextInt();
        // }
        // System.out.println(ProductSmallestPair(sum,array));

        // Q6 https://prepinsta.com/accenture-coding-question-6/
        // int num1=sc.nextInt();
        // int num2=sc.nextInt();
        // System.out.println(NumberOfCarries(num1,num2));

        // q9 char*MoveHyphen(char str[],int n);
        // Insertion sort or string variable

        // Coding Ninjas https://www.codingninjas.com/studio/library/30-most-common-accenture-coding-questions
        // Q16 / 14
        // System.out.print(ChatFrequentcharacter("rohanrudra",'x'));
        

        // Q17
        // int n=4;
        // int arr1[]={1,2,3,5};
        // int m=3;
        // int arr2[]={5,6,7};
        // int ans[]=merge(arr1,arr2); 
        // for(int ele : ans)
        // {
        //     System.out.print(ele+" ");
        // }

        // Q26
        // String input=generateNumber();
        // modulo(input);
    }
}