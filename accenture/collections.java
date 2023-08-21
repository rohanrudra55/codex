import java.util.*;

public class collections {
    public static void main(String args[]){
        basiclist();
        basicset();
        basicmap();
    }
    static void basicmap(){
        Map<Integer,String> map=new HashMap<>();
        map.put(1,"A");
        map.put(2,"B");
        map.put(3,"C");
        map.put(4,"D");

        for(Integer Key:map.keySet()){
            System.out.println(Key+" "+map.get(Key));
        }
        for(Map.Entry<Integer,String> entry:map.entrySet()){
            System.out.println(entry.getKey()+" "+entry.getValue());
        }
        System.out.println(map.toString());
        System.out.println(map.size());

        map.remove(1);
        System.out.println(map.toString());

        map.put(2,"E");
        System.out.println(map.toString());
    }
    static void basiclist(){
        /*
        - `add(element)`: Appends an element to the end of the list.
        - `add(index, element)`: Inserts an element at the specified index.
        - `get(index)`: Retrieves the element at the specified index.
        - `set(index, element)`: Replaces the element at the specified index with the new element.
        - `remove(index)`: Removes the element at the specified index.
        - `remove(element)`: Removes the first occurrence of the specified element.
        - `size()`: Returns the number of elements in the list.
        - `isEmpty()`: Returns `true` if the list is empty.
        - `toArray()`: Converts the `ArrayList` to an array.
        - `indexOf(element)`: Returns the index of the first occurrence of the specified element.
        - `lastIndexOf(element)`: Returns the index of the last occurrence of the specified element.
        - `clear()`: Removes all elements from the list.
        - `subList(fromIndex, toIndex)`: Returns a sublist from the specified range of indexes.

        - `sort(Comparator<? super E> c)`: Sorts the list using the specified comparator.
    */
        List<String> list=new ArrayList<>();
        list.add("A");
        list.add("B");
        list.add("C");
        list.add("D");
        
        System.out.println(list.toString());
        System.out.println(list.size());
        
        System.out.println(list.isEmpty());
        System.out.println(list.contains("B"));

        System.out.println(list.get(0));
        System.out.println(list.indexOf("B"));
        System.out.println(list.lastIndexOf("B"));
        
        System.out.println(list.subList(0,2)); // Excluding 2
        
        list.set(0,"E");
        System.out.println(list.toString());

        list.remove(0);
        System.out.println(list.toString());
        list.remove("C");
        System.out.println(list.toString());
    }
    static void basicset(){
    /* 
        - `boolean add(E element)`: Adds the specified element to the set if it's not already present.
        - `boolean remove(Object object)`: Removes the specified element from the set if it exists.
        - `void clear()`: Removes all elements from the set.
        - `boolean contains(Object object)`: Checks if the set contains the specified element.
        - `boolean isEmpty()`: Checks if the set is empty.
        - `int size()`: Returns the number of elements in the set.

        - `Object[] toArray()`: Converts the set to an array of objects.
        - `<T> T[] toArray(T[] array)`: Converts the set to an array of the specified type.

        - `boolean equals(Object object)`: Compares the set for equality with another object.
        - `int hashCode()`: Returns the hash code value for the set.

        The `Set` interface is implemented by various classes in the `java.util` package:
            - 'HashSet`
            - `LinkedHashSet`
            - 'TreeSet`
    */
    Set<String> set=new HashSet<>();
    set.add("A");
    set.add("B");
    set.add("C");
    set.add("D");
    System.out.println(set.toString());
    System.out.println(set.size());
    
    System.out.println("Empty:"+set.isEmpty());
    System.out.println("Contains B:"+set.contains("B"));
    
    System.out.println("Remove C:"+set.remove("C"));
    System.out.println(set.toString());

    String arr[]=set.toArray(new String[set.size()]);
    System.out.println(Arrays.toString(arr));

    Set<String> set2=new HashSet<>();
    set2.add("A");
    set2.add("B");
    set2.add("C");
    System.out.println(set2.equals(set));

    Set<Integer> set3=new HashSet<>();
    set3.add(1);
    set3.add(2);
    set3.add(3);
    System.out.println(set3.toString());
    Integer arr2[]=set3.toArray(new Integer[set3.size()]);
    System.out.println(Arrays.toString(arr2));
    // High Level
    // int[] intArray = Arrays.stream(arr2).mapToInt(Integer::intValue).toArray();
    
    }
}