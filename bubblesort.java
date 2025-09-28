package merging;

import java.util.Arrays;
import java.util.Scanner;

import static java.lang.System.out;

public class bubblesort {
    public static void main(String[] args) {
        Scanner input=new Scanner(System.in);
        int[] arr=new int[5];
        out.print("Enter Elements of the array : ");
        for (int i = 0; i < arr.length; i++) {
            arr[i]=input.nextInt();
        }
        bubblesort(arr);
        out.println(Arrays.toString(arr));
    }
    static void bubblesort(int[] arr){
        for(int i=0;i<arr.length;i++ ){
            for(int l=1;l<arr.length-i;l++){
                if(arr[l-1]>arr[l]){
                    int temp=arr[l];
                    arr[l]=arr[l-1];
                    arr[l-1]=temp;
                }
            }
        }
    }

}
