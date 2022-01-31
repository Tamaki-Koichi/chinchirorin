package tintirorin;
import java.util.Scanner;

public class Main {
	public static void main (String[] args) {
		Scanner sc = new Scanner(System.in);
		int bet = 0;
		//new TestWindow("限界ちんちろりん",1280,920);
		
		Story.Prologue();
		
		System.out.print("名前を入力してください ⇒");
		String yourname = sc.nextLine();
		Player you = new Player(yourname,5000,0,true);
		
		Story.Rule();
		while(you.isMind() == true) {
			System.out.println("店主「"+you.getName()+"さんはいくら掛けます？」");
			System.out.println(you.getName()+"の所持金:"+you.getMoney());
			System.out.println("プール："+you.getPool());
			Story.newLine();
			System.out.print("掛け金を入力してください ⇒");
			bet = Integer.parseInt(sc.nextLine());
			you.setBet(bet);
			Story.newLine();
			you = Game.game(you);
			
			Story.newLine();
			System.out.println("現在プールされている金額："+you.getPool());
			System.out.println(you.getName()+"さんの所持金："+you.getMoney());
			Story.newLine();
			if(you.getMoney()<=0) {
				you.setMoney(you.getPool());
				you.setPool(0);
				System.out.println("店主「もう掛け金がないみてぇだな、また来てくれや」");
				Story.newLine();
				you.setMind(false);
			}else {
				boolean fail = true;
				while(fail == true) {
					System.out.println("店主「"+you.getName()+"さん、勝負を続けますか？」");
					System.out.print("(0)はい：(1)いいえ⇒");
					int cont = Integer.parseInt(sc.nextLine());
					if(cont==0) {
						you.setMind(true);
						fail = false;
						if(you.getPool()>0) {
							System.out.println("店主「"+you.getPool()+"円預かってますが、受け取りやすか？それとももっと勝負しますかい？」");
							System.out.print("(0)受け取る：(1)勝負をする⇒");
							int think = Integer.parseInt(sc.nextLine());
							if(think==0) {
								System.out.println("店主「預かっていた"+you.getPool()+"円お渡ししますね」");
								you.setMoney(you.getMoney()+you.getPool());
								you.setPool(0);
								fail = false;
							}else if(think != 0 && think != 1) {
								fail = true;
							}
						}
					}else if(cont==1){
						you.setMoney(you.getMoney()+you.getPool());
						you.setMind(false);
						fail = false;
					}else if(cont == 37564){
						System.out.println("店主「お、、お客さん？！何するんでい？！」");
						System.out.println("店主「や、やめてくれ、、命だけは、、、ウ''ッ」");
						you.setMoney(you.getMoney()+you.getPool()+30000000);
						you.setMind(false);
						fail = false;
					}else{
						fail = true;
					}
				}
			}
			Story.newLine();
		}
		Story.newLine();
		System.out.println("===結果発表===");
		System.out.println("プレイヤー名："+you.getName());
		
		System.out.println("所持金："+you.getMoney());
		System.out.println("収支："+(you.getMoney()-5000));
		if(you.getMoney() >= 3000000){
			System.out.println("\n引っ越して家具も買い替えよう！\n");
		}else if(you.getMoney() >= 2500000){
			System.out.println("\nとりあえず貯金で\n");
		}else if(you.getMoney() >= 2000000){
			System.out.println("\n引っ越すか\n");
		}else if(you.getMoney() >= 1500000){
			System.out.println("\n新車の軽自動車でも買いに行くか！\n");
		}else if(you.getMoney() >= 1000000){
			System.out.println("\nしばらくは働かなくてもいいぜ！\n");
		}else if(you.getMoney() >= 500000){
			System.out.println("\nまだまだ稼いでやる！\n");
		}else if(you.getMoney() >= 400000){
			System.out.println("\nブランドもので体を埋め尽くせるぜ！\n");
		}else if(you.getMoney() >= 300000){
			System.out.println("\n毎月このくらいなら良い家に引っ越すかな？？\n");
		}else if(you.getMoney() >= 200000){
			System.out.println("\n好きなことで生きていく！\n");
		}else if(you.getMoney() >= 100000){
			System.out.println("\nこれで生活できるかも、、\n");
		}else if(you.getMoney() >= 50000){
			System.out.println("\nSwitchかPS5買おうかな\n");
		}else if(you.getMoney() >= 30000){
			System.out.println("\n今夜はムフフなお店に行っちゃうぞ！\n");
		}else if(you.getMoney() >= 25000){
			System.out.println("\n今夜はキャバクラだ！\n");
		}else if(you.getMoney() >= 15000){
			System.out.println("\n今夜は飲むぞ！！\n");
		}else if(you.getMoney() >= 10000){
			System.out.println("\n居酒屋にでも行きますか\n");
		}else if(you.getMoney() >= 9000){
			System.out.println("\n一杯だけ飲みに行きましょうか\n");
		}else if(you.getMoney() >= 8000){
			System.out.println("\n少しだけおいしいものが食べられますね\n");
		}else if(you.getMoney() >= 7000){
			System.out.println("\n帰りに牛丼でも買いますか\n");
		}else if(you.getMoney() >= 6000){
			System.out.println("\n少しだけ稼げましたね\n");
		}else if(you.getMoney() == 5000){
			System.out.println("\n今日の結果はトントンでしたね\n");
		}else{
			System.out.println("\nギャンブル、、、やめよっか!!\n");
		}
		
		System.out.println("\nまたのご来店をお待ちしております！\n");
	}
}


