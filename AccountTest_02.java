package Class;

class Account1 {
	
	private int account_num;	// 은행계좌번호 멤버변수
	private int balance;		// 잔액 멤버변수
	static int baseAccNum = 101;	// 클래스 변수	
	static final double interest = 0.02;	// 연간 이자
	
	void deposit (int money) {	// 입금 메서드
		balance += money;
	}
	
	void withdraw (int money) {	// 출금 메서드
		if(money > balance) {
			System.out.println(">> 잔액이 부족합니다");
		}
		else balance -= money;
	}
	
	void fixedDeposit (int principal, int term) {		// 매개변수 : 금액, 기간(년)
		balance = (int)(principal + (principal * interest) * term);
	}
	
	public String toString () {	// toString
		return "계좌번호 : "+account_num+"\t잔액 : "+balance;	// 문자열 return
	}
	
	Account1 () {
		account_num = baseAccNum++;
	}
	
}

public class AccountTest_02 {

	public static void main(String[] args) {
		
		// final double PI = 3.1415;
		
		System.out.println(Account1.baseAccNum);	// 객체 만들기 전에 클래스이름으로 붙여줄 수 있음
		Account1 Ac1 = new Account1();	// 생성자, 계좌1 생성
		System.out.println(Account1.baseAccNum);
		System.out.println(Ac1.baseAccNum);
		/*sSystem.out.println(Ac1.toString());
			
		Ac1.balance = 5000;
		System.out.println(Ac1.toString());
		
		Ac1.withdraw(2000);
		System.out.println(Ac1.toString());
		
		Ac1.withdraw(3500);*/
		System.out.println(Ac1.toString());
		
		Account1 Ac2 = new Account1();	// 계좌2 생성
		System.out.println(Account1.baseAccNum);
		System.out.println(Ac2.toString());
		
		Account1 Ac3 = new Account1();	// 계좌3 생성
		System.out.println(Account.baseAccNum);
		
		Ac3.fixedDeposit(100000, 3);
		System.out.println(Ac3.toString());
		
		
	}

}
