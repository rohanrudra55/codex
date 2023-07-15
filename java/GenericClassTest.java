class Gen < T > {
    T ob;
    Gen(T o) {
        ob = o;
    }
    T getob() {
        return ob;
    }
    void showType() {
        // Inner methods 
        System.out.println("Type of T is "+ob.getClass().getName());
    }
}
class GenericClassTest {
    public static void main(String args[]) {
        Gen < Integer > obj = new Gen < Integer > (88);
        obj.showType();
        int v = obj.getob();
        System.out.println("value: " + v);
    }
}