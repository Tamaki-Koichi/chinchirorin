#include<stdlib.h>
#include<stdio.h>
#include<time.h>

int main(void)
{
	int d1,d2;		/*サイコロ*/
	int bet,saifu,jack;	/*掛け金、所持金、賞金*/
	int y,yosou,kekka;	/*継続選択、予想、結果*/
	char name[100];		/*名前*/
	int cnt=0;

	srand((unsigned)time(NULL));	/*乱数リセット*/
	
	/*サイコロ定義*/
	d1 = 1;			
	d2 = 1;

	/*初期値設定*/
	saifu = 1000;
	bet = 0;
	jack = 0;
	y = 1;	

	/*ゲーム説明・名前入力*/
	printf("\n今月厳しいな、、、おっ！賭博場だ！\n");

	printf("\n店主「さぁさぁお客さん！張った張った！まず名前は何だい！！」\n");
	printf("あなたの名前は？：");
	gets(name);

	printf("\n=ルール説明=");
	printf("\n二つのサイコロの出目を足した数が奇数が偶数か当ててもらいます。");
	printf("\n当たった場合は掛け金の二倍が貰えます。");
	printf("\nそのままもらわずに連続で掛ける場合はさらに貰える金額が二倍になりますが");
	printf("\n負けてしまうと勝ち分はゼロになります。");
	printf("\nこまめに賞金を財布に入れないと掛け金がなくなってしまうのも注意が必要です！\n");
	printf("\n引き際を見極めて頑張ってください\n");

	/*ゲーム本編*/
	while(y == 1||y == 0){
		printf("\n店主「さぁ！張った！！半か長か！！」\n");


		/*所持金確認*/
		puts(name);
		printf("の所持金は%d円です。",saifu);

		/*掛け金入力欄*/
		printf("\nいくら掛けますか？：");			
		scanf("%d",&bet);

		/*予想入力欄*/
		printf("\n==予想開始==\n");
		printf("\n奇数(半)が出ると思いますか？偶数(長)が出ると思いますか？");
		printf("\n奇数（１　偶数（２：");	
		scanf("%d",&yosou);		

		
		/*所持金から掛け金を引く(掛け金不足の場合ゲーム終了)*/
		if(bet > saifu){
			printf("店主「金がねぇんなら帰りな！」");	
			return 1;
		}else{
			saifu -= bet;				
		}

		printf("\nお椀「カラカラカラカラ」\n");

		/*サイコロを回す*/	
		d1 = rand()%6+1;		
		d2 = rand()%6+1;

		/*出目確認*/
		printf("\n店主「一つ目の出目は%d！！二つ目の出目は%dだ！！」\n",d1,d2);
		
		/*奇数偶数判断*/
		if((d1+d2)%2!=0){
			kekka = 1;
			printf("\n店主「出目は半だ！」\n");
		}else{
			kekka = 2;
			printf("\n店主「出目は長だ！」\n");
		}

		/*報酬処理(jackに0以上の数字が入っている場合、さらに倍額)*/
		/*負けた場合は持ち上がり金リセット*/
		if(yosou == kekka){
			bet *= 2;
			if(jack > 0){
				jack = (bet+jack)*2;
			}else{
				jack += bet;
			}
			printf("\n店主「やりやがったな！もってけ泥棒！」\n");
		}else{
			jack = 0;
			printf("\n店主「まぁそんな日もあるさ！」\n");
		}
		
		/*掛け金リセット*/
		bet = 0;
		
		printf("\n現在の賞金は%d円です。\n",jack);
		printf("所持金は%d円です。\n",saifu);

		/*継続方法選択*/
		if(saifu<=0){
			y = 2;
		}else{
		printf("連戦すればさらに賞金は倍になります。\n");
		printf("続けますか？\n");
		printf("\nゲームを終了する（2　一旦賞金を受け取って続ける（1　連戦する（0：");
		scanf("%d",&y);
		}
		/*ゲームの終了か一旦お金を受け取る場合持ち上がり金を受け取る処理*/
		if(y == 2||y==1){
			saifu += jack;
			jack = 0;
		}
	}

	printf("\n==結果発表！==\n");
	printf("\nプレイヤー名：");
	puts(name);
	
	printf("\n所持金：%d",saifu);
	printf("\n収支：%d",saifu-1000);
	if(saifu >= 3000000){
		printf("\n\n");
	}else if(saifu >= 2500000){
		printf("\n\n");
	}else if(saifu >= 2000000){
		printf("\n\n");
	}else if(saifu >= 1500000){
		printf("\n\n");
	}else if(saifu >= 1000000){
		printf("\n\n");
	}else if(saifu >= 500000){
		printf("\n\n");
	}else if(saifu >= 400000){
		printf("\n\n");
	}else if(saifu >= 300000){
		printf("\n\n");
	}else if(saifu >= 200000){
		printf("\n好きなことで生きていく！\n");
	}else if(saifu >= 100000){
		printf("\nこれで生活できるかも、、\n");
	}else if(saifu >= 50000){
		printf("\nSwitchかPS5買おうかな\n");
	}else if(saifu >= 30000){
		printf("\n今夜はムフフなお店に行っちゃうぞ！\n");
	}else if(saifu >= 20000){
		printf("\n今夜はキャバクラだ！\n");
	}else if(saifu >= 10000){
		printf("\n今夜は飲むぞ！！\n");
	}else if(saifu >= 5000){
		printf("\n居酒屋にでも行きますか\n");
	}else if(saifu >= 4000){
		printf("\n一杯だけ飲みに行きましょうか\n");
	}else if(saifu >= 3000){
		printf("\n少しだけおいしいものが食べられますね\n");
	}else if(saifu >= 2000){
		printf("\n帰りに牛丼でも買いますか\n");
	}else if(saifu >= 1000){
		printf("\n少しだけ稼げましたね\n");
	}else if(saifu == 1000){
		printf("\n今日の結果はトントンでしたね\n");
	}else{
		printf("\nギャンブル、、、やめよっか!!\n");
	}

	printf("\nまたのご来店をお待ちしております！\n");

	return 0;

}