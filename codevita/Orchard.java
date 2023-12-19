import java.util.Scanner;

public class Orchard {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Enter the first row of trees: ");
        String row1 = scanner.nextLine();

        System.out.println("Enter the second row of trees: ");
        String row2 = scanner.nextLine();

        if (!isValidInput(row1) || !isValidInput(row2)) {
            System.out.println("Invalid input");
            scanner.close();
            return;
        }

        int possibilities1 = calculatePossibilities(row1);
        int possibilities2 = calculatePossibilities(row2);

        if (possibilities1 > possibilities2) {
            System.out.println("Player 1 wins with " + possibilities1 + " possibilities");
        } else if (possibilities2 > possibilities1) {
            System.out.println("Player 2 wins with " + possibilities2 + " possibilities");
        } else {
            System.out.println("Draw");
        }
        scanner.close();
    }

    private static boolean isValidInput(String row) {
        return row.matches("[ML]+");
    }

    private static int calculatePossibilities(String row) {
        int possibilities = 0;

        for (int i = 0; i < row.length() - 2; i++) {
            char firstTree = row.charAt(i);
            char secondTree = row.charAt(i + 2);

            if (firstTree != secondTree) {
                for (int j = i + 1; j < row.length() - 1; j++) {
                    char thirdTree = row.charAt(j);

                    if (firstTree != thirdTree && secondTree != thirdTree) {
                        possibilities++;
                    }
                }
            }
        }

        return possibilities;
    }
}