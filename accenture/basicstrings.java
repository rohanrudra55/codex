import java.util.*;
class basicstrings{
    public static void main(String args[]){;
        StringClass();
        // StringBufferClass();
    }
    static void StringBufferClass(){
    /*
        - `StringBuffer()`: Creates an empty `StringBuffer` with a default initial capacity.
        - `StringBuffer(int capacity)`: Creates a `StringBuffer` with the specified initial capacity.
        - `append(data)`: Appends various data types to the `StringBuffer`. It automatically converts non-string data to string form.
        - `insert(offset, data)`: Inserts data at the specified offset in the `StringBuffer`.
        - `replace(start, end, str)`: Replaces the characters from the `start` index to the `end - 1` index with the specified string.
        - `delete(start, end)`: Deletes characters from the `start` index to the `end - 1` index.
        - `deleteCharAt(index)`: Deletes the character at the specified index.
        - `charAt(index)`: Returns the character at the specified index.
        - `setCharAt(index, char)`: Sets the character at the specified index to the specified value.
        - `toString()`: Converts the `StringBuffer` to a `String`.
        
        **Not of much use**
        - `capacity()`: Returns the current capacity of the `StringBuffer`.
        - `ensureCapacity(minimumCapacity)`: Ensures that the `StringBuffer` has at least the specified capacity.
        - `trimToSize()`: Reduces the capacity of the `StringBuffer` to the current length.
    */
        StringBuffer s1=new StringBuffer("Hello World");
        System.out.println(s1.capacity());
        System.out.println(s1.toString());
        s1.append(" !");
        System.out.println(s1);
        s1.insert(12, "Java ");
        System.out.println(s1);
        s1.replace(0, 5, "hello");
        System.out.println(s1);
        s1.delete(12,17); 
        System.out.println(s1);
        s1.setCharAt(0, 'H');
        System.out.println(s1);

        StringBuffer s2=new StringBuffer(10);
        System.out.println(s2.capacity());

    }
    static void StringClass(){
    /*
        - `length()`: Returns the length of the string.
        - `isEmpty()`: Returns `true` if the string is empty, `false` otherwise.
        - `substring(int beginIndex)`, `substring(int beginIndex, int endIndex)`: Returns a substring based on the specified indices.
        - `replace(char oldChar, char newChar)`: Replaces all occurrences of `oldChar` with `newChar`.
        - `toUpperCase()`, `toLowerCase()`: Converts the string to uppercase or lowercase.
        - `charAt(int index)`: Returns the character at the specified index.
        - `indexOf(int ch)`, `indexOf(int ch, int fromIndex)`: Returns the index of the specified character.
        - `valueOf(...)`: Creates a string representation of various data types.
        - `trim()`: Removes leading and trailing whitespace characters.
        - `startsWith(String prefix)`, `endsWith(String suffix)`: Checks if the string starts or ends with the specified prefix or suffix.
        
        - `equals(Object anObject)`, `equalsIgnoreCase(String anotherString)`: Compares strings for equality, with or without considering case.
        - `compareTo(String anotherString)`: Compares strings lexicographically.
        - `split(String regex)`, `split(String regex, int limit)`: Splits the string into an array of substrings based on the specified regex.
        - `join(CharSequence delimiter, CharSequence... elements)`: Joins multiple strings using the specified delimiter.
        - `format(String format, Object... args)`: Formats a string using the specified format and arguments.
                %s: String
                %d: Integer
                %f: Floating-point number
                %.nf: Floating-point number with 'n' decimal places
                %c: Character
                %b: Boolean
                %t: Date/time
        - `contains(CharSequence sequence)`: Checks if the string contains the specified sequence.
        
        **Not of much use**
        - `matches(String regex)`: Checks if the string matches the given regular expression.
        - `getBytes()`: Converts the string to a byte array using the platform's default charset.
        - `getBytes(Charset charset)`: Converts the string to a byte array using the specified charset.
    */
        String s1 = " Hello World ";
        System.out.println(s1+" "+s1.length());
        
        s1=s1.trim();
        System.out.println(s1+" "+s1.length());

        String s2=s1.substring(3, 5);
        System.out.println(s2);
        
        String s3=s1.replace('l', 'p');
        System.out.println(s3);
        
        System.out.println(s1.indexOf("el"));
        System.out.println(s1.indexOf("l", 3));
        
        System.out.println(s1.equals(2));
        System.out.println(s1.compareTo(s2));
        
        String s4="Apple, Banana, Kiwi, Mango, Orange, Papaya";
        String[] s5=s4.split(",");
        System.out.println(Arrays.toString(s5));
        s4=String.join(":", s5);
        System.out.println(s4);
        
        String s6=String.format("%s i am rohanrudra%d",s1,55);
        System.out.println(s6);
        
        System.out.println(s1.contains("el"));

        int n=10;
        System.out.println(String.valueOf(n));

        String s7="1234";
        int n1=Integer.parseInt(s7);
        System.out.println(n1);
    }
}