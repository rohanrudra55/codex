class Animal {
    int alive=0;
    public void display() {
        System.out.println("I am an animal");
    }
    public static void type(){
        System.out.println("Base Class");
    }
}

class Cat extends Animal {
    public void display() {
        super.display(); // Works
        super.type(); // Works
        System.out.println("I am a cat");
    }
    public static void type(){
        // super.display(); Error
        System.out.println("Derived Class");
    }
}

class ClassedAndObjects {
    public static void main(String args[]) {
        // Animal animal = new Cat();
        // animal.display(); // Cat

        // Animal animal2 = new Cat();
        // Cat cat2 = (Cat) animal2;
        // cat2.display(); // Cat

        // animal2 = new Animal();
        // animal2.display(); // Animal

        // animal.type(); // Animal
        // animal2.type(); // Animal
        // cat2.type(); // Cat

        Cat cat = new Cat();
        cat.display();
        cat.type();

    }
}