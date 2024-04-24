#include<iostream>
#include<string>
#include<vector>
#include<map>
#include "../luckyhome/Thing.h"
#include "../luckyhome/Props.h"
#include "../luckyhome/Essence.h"
//�������
#include "../luckyhome/BlackPepper.h"
#include "../luckyhome/GreenPepper.h"
#include "../luckyhome/LockRemover.h"
#include"../luckyhome/MonkeyOlivander.h"
#include"../luckyhome/RainCloud.h"
//���뾫��
#include"../luckyhome/BlackPepper_k.h"
#include"../luckyhome/GreenPepper_k.h"
#include"../luckyhome/LockRemover_k.h"
#include"../luckyhome/MonkeyOlivander_k.h"
#include"../luckyhome/RainCloud_k.h"
//������Ʒ
#include"../luckyhome/Bee.h"
#include"../luckyhome/Bubble.h"
#include"../luckyhome/Cat.h"
#include"../luckyhome/Coconut.h"
#include"../luckyhome/Coin.h"
#include"../luckyhome/Cow.h"
#include"../luckyhome/Empty.h"
#include"../luckyhome/Fish.h"
#include"../luckyhome/Flower.h"
#include"../luckyhome/Goldegg.h"
#include"../luckyhome/Goose.h"
#include"../luckyhome/Halfcoconut.h"
#include"../luckyhome/Hugetreasure.h"
#include"../luckyhome/Key.h"
#include"../luckyhome/Lockbox.h"
#include"../luckyhome/Magickey.h"
#include"../luckyhome/Milk.h"
#include"../luckyhome/Monkey.h"
#include"../luckyhome/Pearl.h"
#include"../luckyhome/Rain.h"
#include"../luckyhome/Steelsafe.h"
#include"../luckyhome/Strawberry.h"
#include"../luckyhome/Sun.h"
#include"../luckyhome/Treasure.h"

//�������ɾ���洢����
#include"../luckyhome/PropsDelete.h"

//���뾫��ɾ���洢����
#include"../luckyhome/EssenceDelete.h"
#include"../luckyhome/thingTraversal.h"

//���붯��Ч��
#include"../luckyhome/donghua.h"

#include"../luckyhome/ThingChoose.h"
#include "../luckyhome/thingTraversal.h"
#include"../luckyhome/punchboardItemChoose.h"
#include"../luckyhome/PropsChoose.h"
#include"../luckyhome/EssenceChoose.h"

using namespace std;
int main() {
	//int playergold;//���Ŀǰ����
	//int dayCount;//��Ϸ����
	//int deleteCount;//Ŀǰ����ɾ���Ĵ���
	//int refreshCount;//Ŀǰ����ˢ�µĴ���
	int essenceCount;//Ŀǰ��ҳ��еľ�����
	int Money = 10;
	vector<Thing*>playerItem;//Ŀǰ��������е���Ʒ
	vector<Props*>playerScene;//Ŀǰ��������еĵ���
	vector<Essence*>playerEssence;//Ŀǰ��������еľ���
	vector<Thing*>initalizeItem;//��ʼ������Ʒ
	vector<Props*>initalizeScene;//��ʼ���ĵ���
	vector<Essence*>initalizeEssence;//��ʼ���ľ���
	vector<Thing*>deadItem;//�Ѿ�����������Ʒ
	vector<Props*>deadScene;//�Ѿ��������ĵ���
	vector<Essence*>deadEssence;//�Ѿ��������ľ���
	vector<Thing*>punchboardItem;//�ϻ����е���Ʒ
	map<int,pair<int, int>>itemMap;//�ϻ����е���Ʒλ��
	vector<int>Rent;//�洢���ÿ��Ҫ���ɵķ���
	vector<Thing*> selectedElements;//��ת��ӵ�3����Ʒ
	vector<Props*> selectedElement1;//
	vector<Essence*> selectedElement2;
	vector<int>times;//
	
	playerItem.reserve(1000000);
	playerScene.reserve(1000000);
	playerEssence.reserve(1000000);
	initalizeItem.reserve(1000000);
	initalizeScene.reserve(1000000);
	initalizeEssence.reserve(1000000);
	deadItem.reserve(1000000);
	deadScene.reserve(1000000);
	deadEssence.reserve(1000000);
	punchboardItem.reserve(1000000);
	selectedElements.reserve(1000000);
	selectedElement1.reserve(1000000);
	selectedElement2.reserve(1000000);
	times.reserve(1000);

	//��Ʒ��ʼ��
	initalizeItem.push_back(new Bee());
	initalizeItem.push_back(new Bubble());
	initalizeItem.push_back(new Cat());
	initalizeItem.push_back(new Coconut());
	initalizeItem.push_back(new Coin());
	initalizeItem.push_back(new Cow()); 
	initalizeItem.push_back(new Empty());
	initalizeItem.push_back(new Fish());
	initalizeItem.push_back(new Flower());
	initalizeItem.push_back(new Goldegg());
	initalizeItem.push_back(new Goose());
	initalizeItem.push_back(new Halfcoconut());
	initalizeItem.push_back(new Hugetreasure());
	initalizeItem.push_back(new Key());
	initalizeItem.push_back(new Lockbox());
	initalizeItem.push_back(new Magickey());
	initalizeItem.push_back(new Milk());
	initalizeItem.push_back(new Monkey());
	initalizeItem.push_back(new Pearl());
	initalizeItem.push_back(new Rain());
	initalizeItem.push_back(new Steelsafe());
	initalizeItem.push_back(new Strawberry());
	initalizeItem.push_back(new Sun());
	initalizeItem.push_back(new Treasure());

	//���߳�ʼ��
	initalizeScene.push_back(new BlackPepper());
	initalizeScene.push_back(new GreenPepper());
	initalizeScene.push_back(new LockRemover());
	initalizeScene.push_back(new MonkeyOlivander());
	initalizeScene.push_back(new RainCloud());

	//������ʼ��
	initalizeEssence.push_back(new BlackPepper_k());
	initalizeEssence.push_back(new GreenPepper_k());
	initalizeEssence.push_back(new LockRemover_k());
	//����������ɾ��������֪����ôŪ����ʱ������(�����)
	initalizeEssence.push_back(new MonkeyOlivander_k());
	initalizeEssence.push_back(new RainCloud_k());

	//�ϻ����е���Ʒ��ʼ��(һ��ʼ�����)
	punchboardItem.push_back(new Cat());
	punchboardItem.push_back(new Coin());
	punchboardItem.push_back(new Pearl());
	punchboardItem.push_back(new Flower());
	punchboardItem.push_back(new Bee());


	//�����Ʒ��ʼ��
	playerItem.push_back(new Bee());
	playerItem.push_back(new Flower());
	playerItem.push_back(new Cat());
	playerItem.push_back(new Coin());
	playerItem.push_back(new Pearl());


	//ÿ��Ҫ���ɵķ���ĳ�ʼ��,�ܹ�12��
	Rent.push_back(25);
	Rent.push_back(50);
	Rent.push_back(100);
	Rent.push_back(150);
	Rent.push_back(225);
	Rent.push_back(275);
	Rent.push_back(375);
	Rent.push_back(450);
	Rent.push_back(575);
	Rent.push_back(650);
	Rent.push_back(700);
	Rent.push_back(777);
	

	//ÿ����Ϸ�Ĺؿ���
	times.push_back(5);
	times.push_back(5);
	times.push_back(6);
	times.push_back(6);
	times.push_back(7);
	times.push_back(7);
	times.push_back(8);
	times.push_back(8);
	times.push_back(9);
	times.push_back(9);
	times.push_back(10);
	times.push_back(10);


	//�ϻ�����Ʒλ��
	itemMap[0] = { 0, 0 };
	itemMap[1] = { 1, 0 };
	itemMap[2] = { 2, 0 };
	itemMap[3] = { 3, 0 };
	itemMap[4] = { 4, 0 };
	itemMap[5] = { 0, 1 };
	itemMap[6] = { 1, 1 };
	itemMap[7] = { 2, 1 };
	itemMap[8] = { 3, 1 };
	itemMap[9] = { 4, 1 };
	itemMap[10] = { 0, 2 };
	itemMap[11] = { 1, 2 };
	itemMap[12] = { 2, 2 };
	itemMap[13] = { 3, 2 };
	itemMap[14] = { 4, 2 };
	itemMap[15] = { 0, 3 };
	itemMap[16] = { 1, 3 };
	itemMap[17] = { 2, 3 };
	itemMap[18] = { 3, 3 };
	itemMap[19] = { 4, 3 };




	//���������ܲ���
	//����ɾ���ʹ洢
	PropsDelete(&playerScene, &deadScene);
	//bug�������ں����������������������жϲ���


	//����ɾ���ʹ洢
	EssenceDelete(&playerEssence, &deadEssence);
	//bug::�����������������û���

	initgraph(1441, 856);	// ������ͼ���ڣ���СΪ  ����
	cleardevice();

	//����ͼƬ
	loadpicturexuanzhuan();
	loadpicturefangdong();
	loadpicturejiesuan();
	loadpicturepage();
	loadpicturechoice();
	loadpicturechoiceitem();
	loadpicturechoiceprops();
	loadpicturechoiceessence();
	loadpictureitem();
	loadpicturebackground();
	loadpicturezhuanpan();
	loadpicturefinal_lose();
	
	L:
	for (;;)
	{
		backboard();
		ExMessage mouse = getmessage();
		if (mouse.message == WM_LBUTTONDOWN)
		{
			if (423 < mouse.x && mouse.x < 1017 && 359 < mouse.y && mouse.y < 414)//��ʼ��ť
			{
				cleardevice();
				break;
			}
			else if (423 < mouse.x && mouse.x < 1017 && 431 < mouse.y && mouse.y < 484)//������ť
			{
				cleardevice();
				Continue();
			}
			else if (423 < mouse.x && mouse.x < 1017 && 503 < mouse.y && mouse.y < 556)//ͳ�����ݰ�ť
			{
				cleardevice();
				Tongjishuju();
			}
			else if (423 < mouse.x && mouse.x < 711 && 612 < mouse.y && mouse.y < 665)//ѡ�ť
			{
				cleardevice();
				Options();
			}
			else if (727 < mouse.x && mouse.x < 1017 && 612 < mouse.y && mouse.y < 665)//�˳���ť
			{
				cleardevice();
				return 0;
			}
		}
	}


	TCHAR s[500];
	///////////////////////////////ѭ��/////////////////////////////
	for (int x = 0; x < 12; ++x)
	{
		switch (x) {
		case 0 :
			fangdong1();
			break;	
		case 1 :
			fangdong2();
			break;
		case 2 :
			fangdong3();
			break;
		case 3:
			fangdong4();
			break;
		case 4:
			fangdong5();
			break;
		case 5:
			fangdong6();
			break;
		case 6:
			fangdong7();
			break;
		case 7:
			fangdong8();
			break;
		case 8:
			fangdong9();
			break;
		case 9:
			fangdong10();
			break;
		case 10:
			fangdong11();
			break;
		case 11:
			fangdong12();
			break;
		}

		//����ҵ�����
		_stprintf_s(s, _countof(s), _T("%d"), Money);
		settextstyle(45, 0, _T("Consolas"));
		settextcolor(YELLOW);
		outtextxy(390, 75, s);

		for (;;)
		{
			ExMessage mouse = getmessage();
			if (mouse.message == WM_LBUTTONDOWN)
			{
				if (647 < mouse.x && mouse.x < 767 && 640 < mouse.y && mouse.y < 733)//������ť
				{
					break;
				}
				else if (175 < mouse.x && mouse.x < 343 && 155 << mouse.y && mouse.y < 220)//ѡ�ť
				{
					cleardevice();
					Options();
					switch (x) {
					case 0:
						fangdong1();
						break;
					case 1:
						fangdong2();
						break;
					case 2:
						fangdong3();
						break;
					case 3:
						fangdong4();
						break;
					case 4:
						fangdong5();
						break;
					case 5:
						fangdong6();
						break;
					case 6:
						fangdong7();
						break;
					case 7:
						fangdong8();
						break;
					case 8:
						fangdong9();
						break;
					case 9:
						fangdong10();
						break;
					case 10:
						fangdong11();
						break;
					case 11:
						fangdong12();
						break;
					}
					_stprintf_s(s, _countof(s), _T("%d"), Money);
					settextstyle(45, 0, _T("Consolas"));
					settextcolor(YELLOW);
					outtextxy(390, 75, s);
				}
				else if (1070 < mouse.x && mouse.x < 1252 && 155 < mouse.y && mouse.y < 220)
				{
					cleardevice();
					Tongjishuju();
					switch (x) {
					case 0:
						fangdong1();
						break;
					case 1:
						fangdong2();
						break;
					case 2:
						fangdong3();
						break;
					case 3:
						fangdong4();
						break;
					case 4:
						fangdong5();
						break;
					case 5:
						fangdong6();
						break;
					case 6:
						fangdong7();
						break;
					case 7:
						fangdong8();
						break;
					case 8:
						fangdong9();
						break;
					case 9:
						fangdong10();
						break;
					case 10:
						fangdong11();
						break;
					case 11:
						fangdong12();
						break;
					}
					_stprintf_s(s, _countof(s), _T("%d"), Money);
					settextstyle(45, 0, _T("Consolas"));
					settextcolor(YELLOW);
					outtextxy(390, 75, s);
				}
			}
		}


		for (int y = 0; y < times[x]; ++y)
		{
			Playing();
			punchboardItemChoose(&initalizeItem, &punchboardItem, &playerItem);
			tietu(&punchboardItem, itemMap);
			for (;;)
			{
				ExMessage mouse = getmessage();
				if (mouse.message == WM_LBUTTONDOWN)
				{
					if (596 < mouse.x && mouse.x < 842 && 790 < mouse.y && mouse.y < 875)//��ת��ť
					{
						xuanzhuan();
						break;
					}
					else if (1300 < mouse.x && mouse.x < 1415 && 720 < mouse.y && mouse.y < 772)//ѡ�ť
					{
						cleardevice();
						Options();
						Playing();
						tietu(&punchboardItem, itemMap);
					}
					else if (1230 < mouse.x && mouse.x < 1416 && 785 < mouse.y && mouse.y < 845)
					{
						cleardevice();
						Tongjishuju();
						Playing();
						tietu(&punchboardItem, itemMap);
					}
				}
			}

				
			thingTraversal(&initalizeItem, &punchboardItem, &playerScene, &playerItem, &playerEssence, &Money);

			
			//ѡ��
			ThingChoose(&initalizeItem, &selectedElements);
			choice();

			//����ҵ�����
			_stprintf_s(s, _countof(s), _T("%d"), Money);
			settextstyle(45, 0, _T("Consolas"));
			settextcolor(YELLOW);
			setfillcolor(BROWN);
			outtextxy(390, 75, s);

			additem(&punchboardItem, &selectedElements);

			for (;;)
			{
				ExMessage mouse = getmessage();
				if (mouse.message == WM_LBUTTONDOWN)
				{
					if (151 < mouse.x && mouse.x < 510 && 247 < mouse.y && mouse.y < 715)
					{
						//punchboardItem.push_back(selectedElements[0]);
						playerItem.push_back(selectedElements[0]);
						break;
					}
					else if (510 < mouse.x && mouse.x < 895 && 247 < mouse.y && mouse.y < 715)
					{
						//punchboardItem.push_back(selectedElements[1]);
						playerItem.push_back(selectedElements[1]);
						break;
					}
					else if (895 < mouse.x && mouse.x < 1271 && 247 < mouse.y && mouse.y < 715)
					{
						//punchboardItem.push_back(selectedElements[2]);
						playerItem.push_back(selectedElements[2]);
						break;
					}
					else if (607 < mouse.x && mouse.x < 788 && 153 < mouse.y && mouse.y < 219)
					{
						break;
					}
					else if (170 < mouse.x && mouse.x < 345 && 160 < mouse.y && mouse.y < 220)//ѡ�ť
					{
						Options();
						choice();

						//����ҵ�����
						_stprintf_s(s, _countof(s), _T("%d"), Money);
						settextstyle(45, 0, _T("Consolas"));
						settextcolor(YELLOW);
						setfillcolor(BROWN);
						outtextxy(390, 75, s);

						additem(&punchboardItem, &selectedElements);
					}
					else if (1070 < mouse.x && mouse.x < 1252 && 155 < mouse.y && mouse.y < 220)
					{
						Tongjishuju();
						choice();

						//����ҵ�����
						_stprintf_s(s, _countof(s), _T("%d"), Money);
						settextstyle(45, 0, _T("Consolas"));
						settextcolor(YELLOW);
						setfillcolor(BROWN);
						outtextxy(390, 75, s);

						additem(&punchboardItem, &selectedElements);
					}
				}
			}			

			selectedElements.clear();
			selectedElement1.clear();
			selectedElement2.clear();

		}

		PropsChoose(&initalizeScene, &selectedElement1);
		choice();

		////����ҵ�����
		_stprintf_s(s, _countof(s), _T("%d"), Money);
		settextstyle(45, 0, _T("Consolas"));
		settextcolor(YELLOW);
		outtextxy(390, 75, s);

		addprops(&initalizeScene, &selectedElement1);
		for (;;)
		{
			ExMessage mouse = getmessage();
			if (mouse.message == WM_LBUTTONDOWN)
			{
				if (151 < mouse.x && mouse.x < 510 && 247 < mouse.y && mouse.y < 715)
				{
					playerScene.push_back(selectedElement1[0]);
					break;
				}
				else if (510 < mouse.x && mouse.x < 895 && 247 < mouse.y && mouse.y < 715)
				{
					playerScene.push_back(selectedElement1[1]);
					break;
				}
				else if (895 < mouse.x && mouse.x < 1271 && 247 < mouse.y && mouse.y < 715)
				{
					playerScene.push_back(selectedElement1[2]);
					break;
				}
				else if (607 < mouse.x && mouse.x < 788 && 153 < mouse.y && mouse.y < 219)
				{
					break;
				}
				else if (170 < mouse.x && mouse.x < 345 && 160 < mouse.y && mouse.y < 220)//ѡ�ť
				{
					Options();
					choice();

					//����ҵ�����
					_stprintf_s(s, _countof(s), _T("%d"), Money);
					settextstyle(45, 0, _T("Consolas"));
					settextcolor(YELLOW);
					setfillcolor(BROWN);
					outtextxy(390, 75, s);

					addprops(&initalizeScene, &selectedElement1);
				}
				else if (1070 < mouse.x && mouse.x < 1252 && 155 < mouse.y && mouse.y < 220)
				{
					Tongjishuju();
					choice();

					//����ҵ�����
					_stprintf_s(s, _countof(s), _T("%d"), Money);
					settextstyle(45, 0, _T("Consolas"));
					settextcolor(YELLOW);
					setfillcolor(BROWN);
					outtextxy(390, 75, s);

					addprops(&initalizeScene, &selectedElement1);
				}
			}
		}

		if (x >= 4)
		{
			EssenceChoose(&initalizeEssence, &selectedElement2);
			choice();

			////����ҵ�����
			_stprintf_s(s, _countof(s), _T("%d"), Money);
			settextstyle(45, 0, _T("Consolas"));
			settextcolor(YELLOW);
			outtextxy(390, 75, s);

			addessence(&playerEssence, &selectedElement2);
			for (;;)
			{
				ExMessage mouse = getmessage();
				if (mouse.message == WM_LBUTTONDOWN)
				{
					if (151 < mouse.x && mouse.x < 510 && 247 < mouse.y && mouse.y < 715)
					{
						playerEssence.push_back(selectedElement2[0]);
						break;
					}
					else if (510 < mouse.x && mouse.x < 895 && 247 < mouse.y && mouse.y < 715)
					{
						playerEssence.push_back(selectedElement2[1]);
						break;
					}
					else if (895 < mouse.x && mouse.x < 1271 && 247 < mouse.y && mouse.y < 715)
					{
						playerEssence.push_back(selectedElement2[2]);
						break;
					}
					else if (607 < mouse.x && mouse.x < 788 && 153 < mouse.y && mouse.y < 219)
					{
						break;
					}
					else if (170 < mouse.x && mouse.x < 345 && 160 < mouse.y && mouse.y < 220)//ѡ�ť
					{
						Options();
						choice();

						//����ҵ�����
						_stprintf_s(s, _countof(s), _T("%d"), Money);
						settextstyle(45, 0, _T("Consolas"));
						settextcolor(YELLOW);
						setfillcolor(BROWN);
						outtextxy(390, 75, s);

						addessence(&playerEssence, &selectedElement2);
					}
					else if (1070 < mouse.x && mouse.x < 1252 && 155 < mouse.y && mouse.y < 220)
					{
						Tongjishuju();
						choice();

						//����ҵ�����
						_stprintf_s(s, _countof(s), _T("%d"), Money);
						settextstyle(45, 0, _T("Consolas"));
						settextcolor(YELLOW);
						setfillcolor(BROWN);
						outtextxy(390, 75, s);

						addessence(&playerEssence, &selectedElement2);
					}
				}
			}
		}

		//�ȽϽ���Ƿ��ܹ�������һ�أ�
		if (Money > Rent[x])
		{
			//loadpicturejiesuan();
			switch (x) {
			case 0:
				jiesuan1();
				break;
			case 1:
				jiesuan2();
				break;
			case 2:
				jiesuan3();
				break;
			case 3:
				jiesuan4();
				break;
			case 4:
				jiesuan5();
				break;
			case 5:
				jiesuan6();
				break;
			case 6:
				jiesuan7();
				break;
			case 7:
				jiesuan8();
				break;
			case 8:
				jiesuan9();
				break;
			case 9:
				jiesuan10();
				break;
			case 10:
				jiesuan11();
				break;
			case 11:
				jiesuan12();
				break;
			}

			//����ҵ�����
			_stprintf_s(s, _countof(s), _T("%d"), Money);
			settextstyle(45, 0, _T("Consolas"));
			settextcolor(YELLOW);
			outtextxy(390, 75, s);

			for (;;)
			{
				ExMessage mouse = getmessage();
				if (mouse.message == WM_LBUTTONDOWN)
				{
					if (647 < mouse.x && mouse.x < 767 && 640 < mouse.y && mouse.y < 733)//������ť
					{
						break;
					}
					else if (175 < mouse.x && mouse.x < 343 && 157 << mouse.y && mouse.y < 220)
					{
						cleardevice();
						Options();
						switch (x) {
						case 0:
							jiesuan1();
							break;
						case 1:
							jiesuan2();
							break;
						case 2:
							jiesuan3();
							break;
						case 3:
							jiesuan4();
							break;
						case 4:
							jiesuan5();
							break;
						case 5:
							jiesuan6();
							break;
						case 6:
							jiesuan7();
							break;
						case 7:
							jiesuan8();
							break;
						case 8:
							jiesuan9();
							break;
						case 9:
							jiesuan10();
							break;
						case 10:
							jiesuan11();
							break;
						case 11:
							jiesuan12();
							break;
						}
						_stprintf_s(s, _countof(s), _T("%d"), Money);
						settextstyle(45, 0, _T("Consolas"));
						settextcolor(YELLOW);
						outtextxy(390, 75, s);
					}
					else if (1070 < mouse.x && mouse.x < 1252 && 155 < mouse.y && mouse.y < 220)
					{
						cleardevice();
						Tongjishuju();
						switch (x) {
						case 0:
							jiesuan1();
							break;
						case 1:
							jiesuan2();
							break;
						case 2:
							jiesuan3();
							break;
						case 3:
							jiesuan4();
							break;
						case 4:
							jiesuan5();
							break;
						case 5:
							jiesuan6();
							break;
						case 6:
							jiesuan7();
							break;
						case 7:
							jiesuan8();
							break;
						case 8:
							jiesuan9();
							break;
						case 9:
							jiesuan10();
							break;
						case 10:
							jiesuan11();
							break;
						case 11:
							jiesuan12();
							for (;;)
							{
								ExMessage mouse = getmessage();
								if (mouse.message == WM_LBUTTONDOWN)
								{
									if (647 < mouse.x && mouse.x < 767 && 640 < mouse.y && mouse.y < 733)//������ť
									{
										break;
									}
								}
							}
							break;
							goto L;
						}
						_stprintf_s(s, _countof(s), _T("%d"), Money);
						settextstyle(45, 0, _T("Consolas"));
						settextcolor(YELLOW);
						outtextxy(390, 75, s);
					}
				}
			}

			Money -= Rent[x];

		}
		else {
			final();

			_stprintf_s(s, _countof(s), _T("%d"), Money);
			settextstyle(45, 0, _T("Consolas"));
			settextcolor(YELLOW);
			outtextxy(390, 75, s);
			for (;;)
			{
				ExMessage mouse = getmessage();
				if (mouse.message == WM_LBUTTONDOWN)
				{
					if (647 < mouse.x && mouse.x < 767 && 640 < mouse.y && mouse.y < 733)//������ť
					{
						break;
					}
					else if (175 < mouse.x && mouse.x < 343 && 157 << mouse.y && mouse.y < 220)
					{
						cleardevice();
						Options();
						final();
						_stprintf_s(s, _countof(s), _T("%d"), Money);
						settextstyle(45, 0, _T("Consolas"));
						settextcolor(YELLOW);
						outtextxy(390, 75, s);
					}
					else if (1070 < mouse.x && mouse.x < 1252 && 155 < mouse.y && mouse.y < 220)
					{
						cleardevice();
						Tongjishuju();
						final();
						_stprintf_s(s, _countof(s), _T("%d"), Money);
						settextstyle(45, 0, _T("Consolas"));
						settextcolor(YELLOW);
						outtextxy(390, 75, s);
					}
				}
			}
			goto L;//��ת����ͷ����������ɾ�ˡ�
		}
	}


	// ��������˳�
	_getch();
	closegraph();

	return 0;
}