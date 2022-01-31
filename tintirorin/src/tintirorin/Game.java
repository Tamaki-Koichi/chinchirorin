package tintirorin;
import java.util.Random;
import java.util.Scanner;

public class Game {
	public static Player game(Player you) {
			Scanner sc = new Scanner(System.in);
			Random rn = new Random();
			
			if(you.getBet() > you.getMoney()) {
				System.out.println("店主「金が足りねぇよ兄ちゃん」");
				System.out.println("店主「財布を確認してきな」");
				Story.newLine();
				return you;
			}else{
				you.setMoney(you.getMoney()-you.getBet());
			}
			
			int yosou = 0;
			int kekka = 0;
			int dice[] = {0,0};
			String kekkaName[] ={"長","半"};
			
			System.out.println("=予想開始=");
			System.out.println("店主「半か長か！！」");
			System.out.print("(0)長 ： (1)半 ⇒");
			
			yosou = Integer.parseInt(sc.nextLine());
			
			if(yosou!=1&&yosou!=0) {
				System.out.println("店主「疲れているのか？半か長か聴いているんだが」");
				System.out.println("店主「少し休みな」");
				return you;
			}
			

			
			Story.newLine();
			
			dice[0] = rn.nextInt(6)+1;
			dice[1] = rn.nextInt(6)+1;
			kekka = (dice[0]+dice[1])%2; //0が長、1が半
			
			System.out.println("店主「一つ目の賽子は"+dice[0]+"！\n　　　二つ目の賽子は"+dice[1]+"！\n　　　結果は"+kekkaName[kekka]+"だ！！」");
			if(yosou==kekka) {
				System.out.println("店主「"+you.getName()+"さんの勝ちでい！");
				System.out.println("勝ち金："+(you.getBet()+you.getPool())*2);
				you.setPool( (you.getBet()+you.getPool())*2);
				Story.newLine();
				return you;
				
			}else {
				System.out.println("店主「すみませんね"+you.getName()+"さん、俺らも仕事だもんで」");
				System.out.println("プール・ベット合わせての損失："+(you.getBet()+you.getPool()));
				you.setBet(0);
				you.setPool(0);
				Story.newLine();
				return you;
			}
	}
}
