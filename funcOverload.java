public class funcOverload {
    static <E> void print(E n){
        System.out.println(n);
    }
    public static void main(String[] args) {
        print("hello");
        print('a');

    }

}