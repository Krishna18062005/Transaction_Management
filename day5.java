import java.util.*;

class day5 {
    public static void main(String[] args) {// insertion sort
        Scanner sc = new Scanner(System.in);
        int a[] = new int[10];
        System.out.println("Enter 10 numbers to sort");
        for (int i = 0; i < 10; i++) {
            a[i] = sc.nextInt();
        }
        System.out.println("after input()");
        for (int k = 0; k < 10; k++) {
            System.out.print(a[k] + " ");
        }
        System.out.println();
        for (int i = 0; i < 10; i++) {
            int ke = a[i];
            int j = i - 1;
            for (int ii = 0; ii < 10; ii++) {
                System.out.print(a[ii] + " ");
            }
            System.out.println();
            while (j >= 0 && a[j] > ke) {
                a[j + 1] = a[j];
                j = j - 1;

            }
            a[j + 1] = ke;
        }
        for (int i = 0; i < 10; i++) {
            System.out.print(a[i] + " ");
        }
    }
}