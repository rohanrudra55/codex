import java.util.*;

class temp {
    boolean checkGoodNumber(int n, int rightsum) {
        if (n == 0) {
            return true;
        }
        int lastdigit = n % 10;
        if (lastdigit < rightsum || lastdigit == rightsum && rightsum != 0 ) {
            return false;
        }
        rightsum += lastdigit;
        return checkGoodNumber(n / 10, rightsum);
    }

    public static void main(String args[]) {
        temp obj = new temp();
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        System.out.println(obj.checkGoodNumber(n, 0));
        sc.close();
    }
}
