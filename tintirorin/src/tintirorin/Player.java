package tintirorin;

public class Player {
	private String Name;
	private int Money;
	private int Pool;
	private boolean mind;
	private int bet;
	public Player(String Name,int Money,int Pool,boolean mind){
		this.setName(Name);
		this.setMoney(Money);
		this.setPool(Pool);
		this.setMind(mind);
		this.setBet(bet);
	}
	public int getMoney() {
		return Money;
	}
	public void setMoney(int money) {
		Money = money;
	}
	public String getName() {
		return Name;
	}
	public void setName(String name) {
		Name = name;
	}
	public int getPool() {
		return Pool;
	}
	public void setPool(int pool) {
		Pool = pool;
	}
	public boolean isMind() {
		return mind;
	}
	public void setMind(boolean mind) {
		this.mind = mind;
	}
	public int getBet() {
		return bet;
	}
	public void setBet(int bet) {
		this.bet = bet;
	}
}
