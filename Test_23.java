package Class;

import java.util.Scanner;

public class Test_23 {

	public static void main(String[] args) {

		// 7개의 정수값을 키보드로부터 입력받아, 배열에 넣고
		// 원본데이터 및 배열안의 최대값과 최소값을 출력하시오.
		
		Scanner scan = new Scanner (System.in);
		int[] a = new int[7];
		
		int max = a[0] , min = a[0];
		
		for(int i=0; i<a.length; i++) {
			a[i] = scan.nextInt();
			
			if(i==0) {
				max = a[i];
				min = a[i];
			}
			
			if(a[i]>max) {
				max = a[i];
			}
			else if(a[i]<min)  {
				min = a[i];
			}
		}
		
		System.out.print("원본 데이터 : ");
		for(int i=0; i<a.length; i++) {
			System.out.print(a[i]+"\t");
		}
		
		System.out.println();
		System.out.println("최대값 : "+max+"\t최소값 : "+min);
		
		
		
	}

}
