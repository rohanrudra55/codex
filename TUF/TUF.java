
class TUF {
    public static void findSubstrings(String input) {
        int left = 0;
        int right = 0;

        while (right < input.length()) {

            String substring = input.substring(left, right + 1);
            while (substring.length() > 2) {
                left++;
            }
            substring = input.substring(left, right + 1);
            System.out.println(substring);
            right++;
        }
    }

    public static void main(String[] args) {
        String input = "abcde";
        findSubstrings(input);
    }
}