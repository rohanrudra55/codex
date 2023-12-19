import java.util.Scanner;

public class BestBubble {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int N = scanner.nextInt();
        int[] array = new int[N];
        for (int i = 0; i < N; i++) {
            array[i] = scanner.nextInt();
        }
        System.out.println(minSwapsForBeautifulArray(array));
        scanner.close();
    }

    public static int minSwapsForBeautifulArray(int[] array) {
        int swap1 = AscSort(array.clone());
        int swap2 = DecSort(array.clone());

        return Math.min(swap1, swap2);
    }

    public static int AscSort(int[] array) {
        int n = array.length;
        int swaps = 0;
        boolean swapped;
    
        for (int i = 0; i < n - 1; i++) {
            swapped = false;
            for (int j = 0; j < n - i - 1; j++) {
                if (array[j] > array[j + 1]) {
                    int temp = array[j];
                    array[j] = array[j + 1];
                    array[j + 1] = temp;
                    swaps++;
                    swapped = true;
                }
            }
            if (!swapped) {
                break;
            }
        }
        return swaps;
    }
    public static int DecSort(int[] array) {
        int n = array.length;
        int swaps = 0;
        boolean swapped;
    
        for (int i = 0; i < n - 1; i++) {
            swapped = false;
            for (int j = 0; j < n - i - 1; j++) {
                if (array[j] < array[j + 1]) {
                    // Swapping
                    int temp = array[j];
                    array[j] = array[j + 1];
                    array[j + 1] = temp;
                    swaps++;
                    swapped = true;
                }
            }
            if (!swapped) {
                break;
            }
        }
        return swaps;
    }
    
}
