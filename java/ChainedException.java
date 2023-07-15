// Demonstrate exception chaining.
class ChainedException {
    static void demoproc() {
        // create an exception
        NullPointerException e = new NullPointerException("top layer");
        // add a cause
        e.initCause(new ArithmeticException("cause"));
        throw e;
    }

    public static void main(String args[]) {
        try {
            demoproc();
        } catch (NullPointerException e) {
            // display top level exception
            System.out.println("Caught: " + e);
            // display cause exception
            System.out.println("Original cause: " +
                    e.getCause());
        }
        finally{
            int c =2+2;
            System.out.println("Answer is "+c);
        }
    }
}