package Class;

import java.util.Scanner;

public class Test_22 {

	public static void main(String[] args) {

		// String 배열에 5명의 친구의 이름을 입력받아
		// 짝수번쨰의 친구이름만 출력하세요.
		
		Scanner scan = new Scanner (System.in);
		String [] name = new String[5];
		
		System.out.println("5명의 친구 이름을 입력하세요.");
		
		for(int i=0; i<name.length; i++) {
			System.out.print((i+1)+"번 친구 : ");
			name[i] = scan.next();
		}
		
		for(int i=1; i<name.length; i+=2) {
			System.out.print(name[i]+"\t");
		}
		
		/*for(int i=0; i<name.length; i++) {
			if((i+1)%2==0) {
				System.out.print(name[i]+"\t");
			}
		}*/
		
	}

}
