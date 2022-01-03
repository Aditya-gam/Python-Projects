import java.io.IOException;
import java.util.*;

class A{
    public void printName() {
        System.out.println("Value-A");
    }
}


class B extends A{
    public void printName() {
        System.out.println("Value-B");
    }
}
class C extends A{
    public void printName() {
        System.out.println("Value-C");
    }
}
public class test2 {
    public static void main(String[] args) {
        B b = new B();
        C c = new C();
        b = c;
        newPrint(b);
    }
    public static void newPrint(A a) {
        a.printName();
    }
}