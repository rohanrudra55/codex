
// Show all annotations for a class and a method.
import java.lang.annotation.*;
import java.lang.reflect.*;

@Retention(RetentionPolicy.RUNTIME)
@interface MyAnno {
    String str();

    int val();
}

@Retention(RetentionPolicy.RUNTIME)
@interface What {
    String description();
}

@What(description = "An annotation test class")
@MyAnno(str = "Annotation", val = 99)
class MetaAnotation {
    @What(description = "A MetaAnotation test method")
    @MyAnno(str = "Testing", val = 100)
    public static void myMeth() {
        MetaAnotation ob = new MetaAnotation();
        try {
            Annotation annos[] = ob.getClass().getAnnotations();
            // Display all annotations for Annotation.
            System.out.println("All annotations for MetaAnotation:");
            for (Annotation a : annos)
                System.out.println(a);
            System.out.println();
            // Display all annotations for myMeth.
            Method m = ob.getClass().getMethod("myMeth");
            annos = m.getAnnotations();
            System.out.println("All annotations for myMeth:");
            for (Annotation a : annos)
                System.out.println(a);
        } catch (NoSuchMethodException exc) {
            System.out.println("Method Not Found.");
        }
    }

    public static void main(String args[]) {
        myMeth();
    }
}