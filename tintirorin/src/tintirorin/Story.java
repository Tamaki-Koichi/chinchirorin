package tintirorin;

public class Story {
	public static void Prologue() {
		System.out.println("=限界チンチロリン=");
		System.out.println("???「今月厳しいな、支払いどうしようかな・・・」");
		System.out.println("???「あれ？？ここは、、、賭場？？」");
		System.out.println("");
		System.out.println("店主「らっしゃいお客さん、お金に困っているって顔だね」");
		System.out.println("店主「お客さん、名前は？」");
		System.out.println("");
	}
	public static void Rule() {
		System.out.println("=ルール説明=");
		System.out.println("");
		System.out.println("一：二つのサイコロの出目を足した数が奇数か偶数か当てると掛け金の２倍がプールに入る");
		System.out.println("二：プール入っているお金は１ゲーム毎に引き出すか入れたままにするか選べる");
		System.out.println("三：プールにはいいているお金は引き出さないと掛けられない");
		System.out.println("四：プールにお金を入れた状態で次のゲームに勝つと、掛け金と合わせて更に２倍になる");
		System.out.println("五：予想が外れた場合プールに入れたお金も含めて没収");
		System.out.println("六：１ゲーム毎にゲームを続けるか終わるか選べる");
		System.out.println("七：所持金が０になった時点で、プールにお金があってもゲーム終了");
		System.out.println("");
		System.out.println("=ゲームの大まかな流れ=");
		System.out.println("一：掛け金の設定");
		System.out.println("二：サイコロの予想");
		System.out.println("三：勝負の結果");
		System.out.println("四：ゲームの続投・終了の選択");
		System.out.println("五：プールの引き出し選択");
		System.out.println("終了後：清算");
		System.out.println("");
	}
	public static void newLine() {
		System.out.println("");
	}
}
