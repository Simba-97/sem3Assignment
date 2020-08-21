public class funcOverload {
    //The hassle of funcoverloading in this case can be prevented by generics
    static <E> void print(E n){
        System.out.println(n);
    }
    public static void main(String[] args) {
        print("hello");
        print('a');

    }

}