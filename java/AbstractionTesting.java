interface Show {
    void display();
}

class A {
    Show s;

    public A(Show s) { 
        // s is loosely coupled to A
        this.s = s;
    }

    public void display() {
        System.out.println("A");
        s.display();
    }
}

class B implements Show {
    public void display() {
        System.out.println("B");
    }
}

class AbstractionTesting {
    public static void main(String args[]) {
        Show b = new B();
        b.display(); // B
        A a = new A(b);
        a.display(); // A , B
    }
}
