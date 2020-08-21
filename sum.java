import java.util.Scanner;
public class sum {

    public static int sumOfArray(int[] arr, int n){
        int sum = 0;
        for(int i = 0; i < n; i++){
            sum += arr[i];
        }
        return sum;
    }
    public static void main(String[] args) {
        
        Scanner scan = new Scanner(System.in);
        System.out.println("Enter the range of the Array:");
        int n = scan.nextInt();
        int arr[] = new int[n];
        System.out.println("Enter the elements of the Array:");
        for(int i = 0; i < n; i++){
            arr[i] = scan.nextInt();
        }
        scan.close();

        System.out.println("The sum of the array is :" + sumOfArray(arr, n));



        
    }
}