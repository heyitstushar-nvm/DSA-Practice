package merging;

import java.util.Arrays;
import java.util.Scanner;

import static java.lang.System.out;

public class selectionsort {
    static void main() {
        Scanner input=new Scanner(System.in);
        int[] arr =new int[5];
        for (int i = 0; i < arr.length; i++) {
            arr[i]=input.nextInt();
        }
        selection(arr);
        out.println(Arrays.toString(arr));
    }
    static void selection(int[] arr){
        int maxidx;
        for (int i = 0; i < arr.length; i++) {
            int last=arr.length-i-1;
            maxidx=maxelement(arr,0,last);
            swap(arr,maxidx,last);
        }

    }
    static int maxelement(int[] arr,int start,int end){
        int mxidx=start;
        for (int i = start; i <=end ; i++) {
            if(arr[i]>arr[start]){
                mxidx=i;
            }
        }
        return mxidx;
    }
    static void swap(int[] arr,int a,int b){
        int temp=arr[a];
        arr[a]=arr[b];
        arr[b]=temp;
    }
}
