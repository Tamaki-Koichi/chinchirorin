#include<stdlib.h>
#include<stdio.h>
#include<time.h>

int main(void)
{
	int d1,d2;		/*�T�C�R��*/
	int bet,saifu,jack;	/*�|�����A�������A�܋�*/
	int y,yosou,kekka;	/*�p���I���A�\�z�A����*/
	char name[100];		/*���O*/
	int cnt=0;

	srand((unsigned)time(NULL));	/*�������Z�b�g*/
	
	/*�T�C�R����`*/
	d1 = 1;			
	d2 = 1;

	/*�����l�ݒ�*/
	saifu = 1000;
	bet = 0;
	jack = 0;
	y = 1;	

	/*�Q�[�������E���O����*/
	printf("\n�����������ȁA�A�A�����I�q���ꂾ�I\n");

	printf("\n�X��u�����������q����I�������������I�܂����O�͉������I�I�v\n");
	printf("���Ȃ��̖��O�́H�F");
	gets(name);

	printf("\n=���[������=");
	printf("\n��̃T�C�R���̏o�ڂ𑫂�������������������ĂĂ��炢�܂��B");
	printf("\n���������ꍇ�͊|�����̓�{���Ⴆ�܂��B");
	printf("\n���̂܂܂���킸�ɘA���Ŋ|����ꍇ�͂���ɖႦ����z����{�ɂȂ�܂���");
	printf("\n�����Ă��܂��Ə������̓[���ɂȂ�܂��B");
	printf("\n���܂߂ɏ܋������z�ɓ���Ȃ��Ɗ|�������Ȃ��Ȃ��Ă��܂��̂����ӂ��K�v�ł��I\n");
	printf("\n�����ۂ����ɂ߂Ċ撣���Ă�������\n");

	/*�Q�[���{��*/
	while(y == 1||y == 0){
		printf("\n�X��u�����I�������I�I���������I�I�v\n");


		/*�������m�F*/
		puts(name);
		printf("�̏�������%d�~�ł��B",saifu);

		/*�|�������͗�*/
		printf("\n������|���܂����H�F");			
		scanf("%d",&bet);

		/*�\�z���͗�*/
		printf("\n==�\�z�J�n==\n");
		printf("\n�(��)���o��Ǝv���܂����H����(��)���o��Ǝv���܂����H");
		printf("\n��i�P�@�����i�Q�F");	
		scanf("%d",&yosou);		

		
		/*����������|����������(�|�����s���̏ꍇ�Q�[���I��)*/
		if(bet > saifu){
			printf("�X��u�����˂���Ȃ�A��ȁI�v");	
			return 1;
		}else{
			saifu -= bet;				
		}

		printf("\n���o�u�J���J���J���J���v\n");

		/*�T�C�R������*/	
		d1 = rand()%6+1;		
		d2 = rand()%6+1;

		/*�o�ڊm�F*/
		printf("\n�X��u��ڂ̏o�ڂ�%d�I�I��ڂ̏o�ڂ�%d���I�I�v\n",d1,d2);
		
		/*��������f*/
		if((d1+d2)%2!=0){
			kekka = 1;
			printf("\n�X��u�o�ڂ͔����I�v\n");
		}else{
			kekka = 2;
			printf("\n�X��u�o�ڂ͒����I�v\n");
		}

		/*��V����(jack��0�ȏ�̐����������Ă���ꍇ�A����ɔ{�z)*/
		/*�������ꍇ�͎����オ������Z�b�g*/
		if(yosou == kekka){
			bet *= 2;
			if(jack > 0){
				jack = (bet+jack)*2;
			}else{
				jack += bet;
			}
			printf("\n�X��u���₪�����ȁI�����Ă��D�_�I�v\n");
		}else{
			jack = 0;
			printf("\n�X��u�܂�����ȓ������邳�I�v\n");
		}
		
		/*�|�������Z�b�g*/
		bet = 0;
		
		printf("\n���݂̏܋���%d�~�ł��B\n",jack);
		printf("��������%d�~�ł��B\n",saifu);

		/*�p�����@�I��*/
		if(saifu<=0){
			y = 2;
		}else{
		printf("�A�킷��΂���ɏ܋��͔{�ɂȂ�܂��B\n");
		printf("�����܂����H\n");
		printf("\n�Q�[�����I������i2�@��U�܋����󂯎���đ�����i1�@�A�킷��i0�F");
		scanf("%d",&y);
		}
		/*�Q�[���̏I������U�������󂯎��ꍇ�����オ������󂯎�鏈��*/
		if(y == 2||y==1){
			saifu += jack;
			jack = 0;
		}
	}

	printf("\n==���ʔ��\�I==\n");
	printf("\n�v���C���[���F");
	puts(name);
	
	printf("\n�������F%d",saifu);
	printf("\n���x�F%d",saifu-1000);
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
		printf("\n�D���Ȃ��ƂŐ����Ă����I\n");
	}else if(saifu >= 100000){
		printf("\n����Ő����ł��邩���A�A\n");
	}else if(saifu >= 50000){
		printf("\nSwitch��PS5����������\n");
	}else if(saifu >= 30000){
		printf("\n����̓��t�t�Ȃ��X�ɍs�����Ⴄ���I\n");
	}else if(saifu >= 20000){
		printf("\n����̓L���o�N�����I\n");
	}else if(saifu >= 10000){
		printf("\n����͈��ނ��I�I\n");
	}else if(saifu >= 5000){
		printf("\n�������ɂł��s���܂���\n");
	}else if(saifu >= 4000){
		printf("\n��t�������݂ɍs���܂��傤��\n");
	}else if(saifu >= 3000){
		printf("\n�������������������̂��H�ׂ��܂���\n");
	}else if(saifu >= 2000){
		printf("\n�A��ɋ����ł������܂���\n");
	}else if(saifu >= 1000){
		printf("\n���������҂��܂�����\n");
	}else if(saifu == 1000){
		printf("\n�����̌��ʂ̓g���g���ł�����\n");
	}else{
		printf("\n�M�����u���A�A�A��߂����!!\n");
	}

	printf("\n�܂��̂����X�����҂����Ă���܂��I\n");

	return 0;

}