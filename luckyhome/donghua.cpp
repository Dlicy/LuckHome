#include "../luckyhome/donghua.h"

bool isxuanzhuan = true;
bool ischoice1 = false;
bool ischoice2 = false;
bool ischoice3 = false;
bool istietu = false;
bool isStsrtgame1 = false;
bool isContinue = false;

IMAGE imgpage;
IMAGE imgoption;
IMAGE imgzhizuozu;
IMAGE imgcontinue;
IMAGE imgtongjishuju;
IMAGE imggamegonglue[7];
IMAGE imgEssencebook[3];
IMAGE imgPropsbook[3];
IMAGE imgItembook[12];
IMAGE imgxuanzhuan[50];
IMAGE imgbackground;
IMAGE imgitem[23];
IMAGE imgzhuanpan;
IMAGE imgchoice;
IMAGE imgfangdong[12];
IMAGE imgjiesuan[12];
IMAGE imgjiesuan1;
IMAGE imgjiesuan2;
IMAGE imgjiesuan3;
IMAGE imgjiesuan4;
IMAGE imgjiesuan5;
IMAGE imgjiesuan6;
IMAGE imgjiesuan7;
IMAGE imgjiesuan8;
IMAGE imgjiesuan9;
IMAGE imgjiesuan10;
IMAGE imgjiesuan11;
IMAGE imgjiesuan12;
IMAGE imgfinal_lose;
IMAGE imgchoiceitem[23];
IMAGE imgchoiceessence[5];
IMAGE imgchoiceprops[5];
IMAGE imgfinal_win;

void loadpicturepage()// ����ͼƬ
{
	loadimage(&imgpage, L"./pictures/page.png", 1441, 856, false);
	//loadimage(&imgpage, _T("C:\\Users\\Yang\\Pictures\\jzk\\15B90DE016C5A42F03ADE7AB8336C7CF.png")); 
}
void loadpictureoption()// ѡ��ͼƬ
{
	loadimage(&imgoption, L"./pictures/Option.png", 1441, 856, false);
}
void loadpicturezhizuozu()// ������ͼƬ
{
	loadimage(&imgzhizuozu, L"./pictures/zhizuozu.png", 1441, 856, false);
}
void loadpicturecontinue()// ������ϷͼƬ
{
	loadimage(&imgcontinue, L"./pictures/continue.png", 1441, 856, false);
}
void loadpicturegamegonglue()// ��Ϸ�淨
{
	loadimage(&imggamegonglue[0], L"./pictures/gamegonglue1.png", 1441, 856, false);
	loadimage(&imggamegonglue[1], L"./pictures/gamegonglue2.png", 1441, 856, false);
	loadimage(&imggamegonglue[2], L"./pictures/gamegonglue3.png", 1441, 856, false);
	loadimage(&imggamegonglue[3], L"./pictures/gamegonglue4.png", 1441, 856, false);
	loadimage(&imggamegonglue[4], L"./pictures/gamegonglue5.png", 1441, 856, false);
	loadimage(&imggamegonglue[5], L"./pictures/gamegonglue6.png", 1441, 856, false);
	loadimage(&imggamegonglue[6], L"./pictures/gamegonglue7.png", 1441, 856, false);
}
void loadpictureEssencebook()// ����������
{
	loadimage(&imgEssencebook[0], L"./pictures/Essencebook1.png", 1441, 856, false);
	loadimage(&imgEssencebook[1], L"./pictures/Essencebook2.png", 1441, 856, false);
	loadimage(&imgEssencebook[2], L"./pictures/Essencebook3.png", 1441, 856, false);
}
void loadpicturePropsbook()// ���߲�����
{
	loadimage(&imgPropsbook[0], L"./pictures/Propsbook1.png", 1441, 856, false);
	loadimage(&imgPropsbook[1], L"./pictures/Propsbook2.png", 1441, 856, false);
	loadimage(&imgPropsbook[2], L"./pictures/Propsbook3.png", 1441, 856, false);
}
void loadpicturetongjishuju()// ͳ������
{
	loadimage(&imgtongjishuju, L"./pictures/tongjishuju.png", 1441, 856, false);
}
void loadpictureItembook()// ��Ʒ������
{
	loadimage(&imgItembook[0], L"./pictures/Itembook1.png", 1441, 856, false);
	loadimage(&imgItembook[2], L"./pictures/Itembook2.png", 1441, 856, false);
	loadimage(&imgItembook[3], L"./pictures/Itembook3.png", 1441, 856, false);
	loadimage(&imgItembook[4], L"./pictures/Itembook4.png", 1441, 856, false);
	loadimage(&imgItembook[5], L"./pictures/Itembook5.png", 1441, 856, false);
	loadimage(&imgItembook[6], L"./pictures/Itembook6.png", 1441, 856, false);
	loadimage(&imgItembook[7], L"./pictures/Itembook7.png", 1441, 856, false);
	loadimage(&imgItembook[8], L"./pictures/Itembook8.png", 1441, 856, false);
	loadimage(&imgItembook[9], L"./pictures/Itembook9.png", 1441, 856, false);
	loadimage(&imgItembook[10], L"./pictures/Itembook10.png", 1441, 856, false);
	loadimage(&imgItembook[11], L"./pictures/Itembook11.png", 1441, 856, false);
}
void loadpicturexuanzhuan()// ��תת������
{
	loadimage(&imgxuanzhuan[0], L"./pictures/xuanzhuan1.png", 1441, 856, false);
	loadimage(&imgxuanzhuan[1], L"./pictures/xuanzhuan2.png", 1441, 856, false);
	loadimage(&imgxuanzhuan[2], L"./pictures/xuanzhuan3.png", 1441, 856, false);
	loadimage(&imgxuanzhuan[3], L"./pictures/xuanzhuan4.png", 1441, 856, false);
	loadimage(&imgxuanzhuan[4], L"./pictures/xuanzhuan5.png", 1441, 856, false);
	loadimage(&imgxuanzhuan[5], L"./pictures/xuanzhuan6.png", 1441, 856, false);
	loadimage(&imgxuanzhuan[6], L"./pictures/xuanzhuan7.png", 1441, 856, false);
	loadimage(&imgxuanzhuan[7], L"./pictures/xuanzhuan8.png", 1441, 856, false);
	loadimage(&imgxuanzhuan[8], L"./pictures/xuanzhuan9.png", 1441, 856, false);
	loadimage(&imgxuanzhuan[9], L"./pictures/xuanzhuan10.png", 1441, 856, false);
	loadimage(&imgxuanzhuan[10], L"./pictures/xuanzhuan11.png", 1441, 856, false);
	loadimage(&imgxuanzhuan[11], L"./pictures/xuanzhuan12.png", 1441, 856, false);
	loadimage(&imgxuanzhuan[12], L"./pictures/xuanzhuan13.png", 1441, 856, false);
	loadimage(&imgxuanzhuan[13], L"./pictures/xuanzhuan14.png", 1441, 856, false);
	loadimage(&imgxuanzhuan[14], L"./pictures/xuanzhuan15.png", 1441, 856, false);
	loadimage(&imgxuanzhuan[15], L"./pictures/xuanzhuan16.png", 1441, 856, false);
	loadimage(&imgxuanzhuan[16], L"./pictures/xuanzhuan17.png", 1441, 856, false);
	loadimage(&imgxuanzhuan[17], L"./pictures/xuanzhuan18.png", 1441, 856, false);
	loadimage(&imgxuanzhuan[18], L"./pictures/xuanzhuan19.png", 1441, 856, false);
	loadimage(&imgxuanzhuan[19], L"./pictures/xuanzhuan20.png", 1441, 856, false);
	loadimage(&imgxuanzhuan[20], L"./pictures/xuanzhuan21.png", 1441, 856, false);
	loadimage(&imgxuanzhuan[21], L"./pictures/xuanzhuan22.png", 1441, 856, false);
	loadimage(&imgxuanzhuan[22], L"./pictures/xuanzhuan23.png", 1441, 856, false);
	loadimage(&imgxuanzhuan[23], L"./pictures/xuanzhuan24.png", 1441, 856, false);
	loadimage(&imgxuanzhuan[24], L"./pictures/xuanzhuan25.png", 1441, 856, false);
	loadimage(&imgxuanzhuan[25], L"./pictures/xuanzhuan26.png", 1441, 856, false);
	loadimage(&imgxuanzhuan[26], L"./pictures/xuanzhuan27.png", 1441, 856, false);
	loadimage(&imgxuanzhuan[27], L"./pictures/xuanzhuan28.png", 1441, 856, false);
	loadimage(&imgxuanzhuan[28], L"./pictures/xuanzhuan29.png", 1441, 856, false);
	loadimage(&imgxuanzhuan[29], L"./pictures/xuanzhuan30.png", 1441, 856, false);
	loadimage(&imgxuanzhuan[30], L"./pictures/xuanzhuan31.png", 1441, 856, false);
	loadimage(&imgxuanzhuan[31], L"./pictures/xuanzhuan32.png", 1441, 856, false);
	loadimage(&imgxuanzhuan[32], L"./pictures/xuanzhuan33.png", 1441, 856, false);
	loadimage(&imgxuanzhuan[33], L"./pictures/xuanzhuan34.png", 1441, 856, false);
	loadimage(&imgxuanzhuan[34], L"./pictures/xuanzhuan35.png", 1441, 856, false);
	loadimage(&imgxuanzhuan[35], L"./pictures/xuanzhuan36.png", 1441, 856, false);
	loadimage(&imgxuanzhuan[36], L"./pictures/xuanzhuan37.png", 1441, 856, false);
	loadimage(&imgxuanzhuan[37], L"./pictures/xuanzhuan38.png", 1441, 856, false);
	loadimage(&imgxuanzhuan[38], L"./pictures/xuanzhuan39.png", 1441, 856, false);
	loadimage(&imgxuanzhuan[39], L"./pictures/xuanzhuan40.png", 1441, 856, false);
	loadimage(&imgxuanzhuan[40], L"./pictures/xuanzhuan41.png", 1441, 856, false);
	loadimage(&imgxuanzhuan[41], L"./pictures/xuanzhuan42.png", 1441, 856, false);
	loadimage(&imgxuanzhuan[42], L"./pictures/xuanzhuan43.png", 1441, 856, false);
	loadimage(&imgxuanzhuan[43], L"./pictures/xuanzhuan44.png", 1441, 856, false);
	loadimage(&imgxuanzhuan[44], L"./pictures/xuanzhuan45.png", 1441, 856, false);
	loadimage(&imgxuanzhuan[45], L"./pictures/xuanzhuan46.png", 1441, 856, false);
	loadimage(&imgxuanzhuan[46], L"./pictures/xuanzhuan47.png", 1441, 856, false);
	loadimage(&imgxuanzhuan[47], L"./pictures/xuanzhuan48.png", 1441, 856, false);
	loadimage(&imgxuanzhuan[48], L"./pictures/xuanzhuan49.png", 1441, 856, false);
	loadimage(&imgxuanzhuan[49], L"./pictures/xuanzhuan50.png", 1441, 856, false);
}
void loadpicturebackground()
{
	loadimage(&imgbackground, L"./pictures/zhuanpanback.png", 1441, 856, false);
}
void loadpictureitem()
{
	loadimage(&imgitem[0], L"./pictures/item/Bee.png", 206, 185, false);
	loadimage(&imgitem[1], L"./pictures/item/Bubble.png", 206, 185, false);
	loadimage(&imgitem[2], L"./pictures/item/Cat.png", 206, 185, false);
	loadimage(&imgitem[3], L"./pictures/item/Coconut.png", 206, 185, false);
	loadimage(&imgitem[4], L"./pictures/item/Coin.png", 206, 185, false);
	loadimage(&imgitem[5], L"./pictures/item/Cow.png", 206, 185, false);
	loadimage(&imgitem[6], L"./pictures/item/Fish.png", 206, 185, false);
	loadimage(&imgitem[7], L"./pictures/item/Goldegg.png", 206, 185, false);
	loadimage(&imgitem[8], L"./pictures/item/Goose.png", 206, 185, false);
	loadimage(&imgitem[9], L"./pictures/item/Halfcoconut.png", 206, 185, false);
	loadimage(&imgitem[10], L"./pictures/item/Hugetreasure.png", 206, 185, false);
	loadimage(&imgitem[11], L"./pictures/item/Key.png", 206, 185, false);
	loadimage(&imgitem[12], L"./pictures/item/lockbox.png", 206, 185, false);
	loadimage(&imgitem[13], L"./pictures/item/Magickey.png", 206, 185, false);
	loadimage(&imgitem[14], L"./pictures/item/Milk.png", 206, 185, false);
	loadimage(&imgitem[15], L"./pictures/item/Monkey.png", 206, 185, false);
	loadimage(&imgitem[16], L"./pictures/item/Pearl.png", 206, 185, false);
	loadimage(&imgitem[17], L"./pictures/item/Rain.png", 206, 185, false);
	loadimage(&imgitem[18], L"./pictures/item/Steelsafe.png", 206, 185, false);
	loadimage(&imgitem[19], L"./pictures/item/Strawberry.png", 206, 185, false);
	loadimage(&imgitem[20], L"./pictures/item/Sun.png", 206, 185, false);
	loadimage(&imgitem[21], L"./pictures/item/Treasure.png", 206, 185, false);
	loadimage(&imgitem[22], L"./pictures/item/Flower.png", 206, 185, false);
}
void loadpicturezhuanpan()// ת��ͼƬ
{
	loadimage(&imgzhuanpan, L"./pictures/zhuanpan.png", 1111, 767, false);
}
void loadpicturechoice()// ѡ�����
{
	loadimage(&imgchoice, L"./pictures/choice.png", 1441, 856, false);
}
void loadpicturefangdong()// ��������
{
	loadimage(&imgfangdong[0], L"./pictures/fangdong/fangdong1.png", 1441, 856, false);
	loadimage(&imgfangdong[1], L"./pictures/fangdong/fangdong2.png", 1441, 856, false);
	loadimage(&imgfangdong[2], L"./pictures/fangdong/fangdong3.png", 1441, 856, false);
	loadimage(&imgfangdong[3], L"./pictures/fangdong/fangdong4.png", 1441, 856, false);
	loadimage(&imgfangdong[4], L"./pictures/fangdong/fangdong5.png", 1441, 856, false);
	loadimage(&imgfangdong[5], L"./pictures/fangdong/fangdong6.png", 1441, 856, false);
	loadimage(&imgfangdong[6], L"./pictures/fangdong/fangdong7.png", 1441, 856, false);
	loadimage(&imgfangdong[7], L"./pictures/fangdong/fangdong8.png", 1441, 856, false);
	loadimage(&imgfangdong[8], L"./pictures/fangdong/fangdong9.png", 1441, 856, false);
	loadimage(&imgfangdong[9], L"./pictures/fangdong/fangdong10.png", 1441, 856, false);
	loadimage(&imgfangdong[10], L"./pictures/fangdong/fangdong11.png", 1441, 856, false);
	loadimage(&imgfangdong[11], L"./pictures/fangdong/fangdong12.png", 1441, 856, false);
}
void loadpicturejiesuan()// ����ͼƬ
{
	loadimage(&imgjiesuan[0], L"./pictures/jiesuan/jiesuan1.png", 1441, 856, false);
	loadimage(&imgjiesuan[1], L"./pictures/jiesuan/jiesuan2.png", 1441, 856, false);
	loadimage(&imgjiesuan[2], L"./pictures/jiesuan/jiesuan3.png", 1441, 856, false);
	loadimage(&imgjiesuan[3], L"./pictures/jiesuan/jiesuan4.png", 1441, 856, false);
	loadimage(&imgjiesuan[4], L"./pictures/jiesuan/jiesuan5.png", 1441, 856, false);
	loadimage(&imgjiesuan[5], L"./pictures/jiesuan/jiesuan6.png", 1441, 856, false);
	loadimage(&imgjiesuan[6], L"./pictures/jiesuan/jiesuan7.png", 1441, 856, false);
	loadimage(&imgjiesuan[7], L"./pictures/jiesuan/jiesuan8.png", 1441, 856, false);
	loadimage(&imgjiesuan[8], L"./pictures/jiesuan/jiesuan9.png", 1441, 856, false);
	loadimage(&imgjiesuan[9], L"./pictures/jiesuan/jiesuan10.png", 1441, 856, false);
	loadimage(&imgjiesuan[10], L"./pictures/jiesuan/jiesuan11.png", 1441, 856, false);
	loadimage(&imgjiesuan[11], L"./pictures/jiesuan/jiesuan12.png", 1441, 856, false);
}
void loadpicturefinal_win()// ʤ��
{
	loadimage(&imgfinal_win, L"./picture/final_win.png", 1441, 856, false);
}
void loadpicturefinal_lose()// ����
{
	loadimage(&imgfinal_lose, L"./picture/final_lose.png", 1441, 856, false);
}
void loadpicturechoiceitem()
{
	loadimage(&imgchoiceitem[0], L"./pictures/choiceitem/Bee.png", 373, 270, false);
	loadimage(&imgchoiceitem[1], L"./pictures/choiceitem/Bubble.png", 373, 270, false);
	loadimage(&imgchoiceitem[2], L"./pictures/choiceitem/Cat.png", 373, 270, false);
	loadimage(&imgchoiceitem[3], L"./pictures/choiceitem/Coconut.png", 373, 270, false);
	loadimage(&imgchoiceitem[4], L"./pictures/choiceitem/Coin.png", 373, 270, false);
	loadimage(&imgchoiceitem[5], L"./pictures/choiceitem/Cow.png", 373, 270, false);
	loadimage(&imgchoiceitem[6], L"./pictures/choiceitem/Fish.png", 373, 270, false);
	loadimage(&imgchoiceitem[7], L"./pictures/choiceitem/Goldegg.png", 373, 270, false);
	loadimage(&imgchoiceitem[8], L"./pictures/choiceitem/Goose.png", 373, 270, false);
	loadimage(&imgchoiceitem[9], L"./pictures/choiceitem/Halfcoconut.png", 373, 270, false);
	loadimage(&imgchoiceitem[10], L"./pictures/choiceitem/Hugetreasure.png", 373, 270, false);
	loadimage(&imgchoiceitem[11], L"./pictures/choiceitem/Key.png", 373, 270, false);
	loadimage(&imgchoiceitem[12], L"./pictures/choiceitem/Lockbox.png", 373, 270, false);
	loadimage(&imgchoiceitem[13], L"./pictures/choiceitem/Magickey.png", 373, 270, false);
	loadimage(&imgchoiceitem[14], L"./pictures/choiceitem/Milk.png", 373, 270, false);
	loadimage(&imgchoiceitem[15], L"./pictures/choiceitem/Monkey.png", 373, 270, false);
	loadimage(&imgchoiceitem[16], L"./pictures/choiceitem/Pearl.png", 373, 270, false);
	loadimage(&imgchoiceitem[17], L"./pictures/choiceitem/Rain.png", 373, 270, false);
	loadimage(&imgchoiceitem[18], L"./pictures/choiceitem/Steelsafe.png", 373, 270, false);
	loadimage(&imgchoiceitem[19], L"./pictures/choiceitem/Strawberry.png", 373, 270, false);
	loadimage(&imgchoiceitem[20], L"./pictures/choiceitem/Sun.png", 373, 270, false);
	loadimage(&imgchoiceitem[21], L"./pictures/choiceitem/Treasure.png", 373, 270, false);
	loadimage(&imgchoiceitem[22], L"./pictures/choiceitem/Flower.png", 373, 270, false);
}
void loadpicturechoiceessence()
{
	loadimage(&imgchoiceessence[0], L"./pictures/choiceessence/BlackPepper.png", 373, 270, false);
	loadimage(&imgchoiceessence[1], L"./pictures/choiceessence/GreenPepper.png", 373, 270, false);
	loadimage(&imgchoiceessence[2], L"./pictures/choiceessence/LockRemover.png", 373, 270, false);
	loadimage(&imgchoiceessence[3], L"./pictures/choiceessence/MonkeyOlivander.png", 373, 270, false);
	loadimage(&imgchoiceessence[4], L"./pictures/choiceessence/RainCloud.png", 373, 270, false);
}
void loadpicturechoiceprops()
{
	loadimage(&imgchoiceprops[0], L"./pictures/choiceprops/BlackPepper.png", 373, 270, false);
	loadimage(&imgchoiceprops[1], L"./pictures/choiceprops/GreenPepper.png", 373, 270, false);
	loadimage(&imgchoiceprops[2], L"./pictures/choiceprops/LockRemover.png", 373, 270, false);
	loadimage(&imgchoiceprops[3], L"./pictures/choiceprops/MonkeyOlivander.png", 373, 270, false);
	loadimage(&imgchoiceprops[4], L"./pictures/choiceprops/RainCloud.png", 373, 270, false);
}

//void tiaozhuan(int x11, int x12, int y11, int y12, int x21, int x22, int y21, int y22, int x31, int x32, int y31, int y32) //��תҳ��
//{
//	ExMessage mouse = getmessage();
//	while (1)
//	{
//		ExMessage mouse = getmessage();
//		if (mouse.message == WM_LBUTTONDOWN)
//		{
//			if ()
//		}
//	}
//	cleardevice();
//}

void backboard() // ��ʼ��������
{
	//loadpicturepage();
	putimage(0, 0, &imgpage);

	//for (;;)
	//{
	//	//cout << 2 << endl;
	//	ExMessage mouse = getmessage();
	//	if (mouse.message == WM_LBUTTONDOWN)
	//	{
	//		if (423 < mouse.x && mouse.x < 1017 && 359 < mouse.y && mouse.y < 414)//��ʼ��ť
	//		{
	//			cleardevice();
	//			//isStsrtgame1 = true;
	//			Startgame1();
	//		}
	//		else if (423 < mouse.x && mouse.x < 1017 && 431 < mouse.y && mouse.y < 484)//������ť
	//		{
	//			cleardevice();
	//			//isContinue = true;
	//			Continue();
	//		}
	//		else if (423 < mouse.x && mouse.x < 1017 && 503 < mouse.y && mouse.y < 556)//ͳ�����ݰ�ť
	//		{
	//			cleardevice();
	//			Tongjishuju();
	//		}
	//		else if (423 < mouse.x && mouse.x < 711 && 612 < mouse.y && mouse.y < 665)//ѡ�ť
	//		{
	//			cleardevice();
	//			Options1();
	//		}
	//		else if (727 < mouse.x && mouse.x < 1017 && 612 < mouse.y && mouse.y < 665)//�˳���ť
	//		{
	//			cleardevice();
	//			return;
	//		}
	//	}
	//}
	//cout << 1 << endl;
	return;
}

void Continue() //������Ϸ
{
	loadpicturecontinue();
	putimage(0, 0, &imgcontinue);
	ExMessage mouse = getmessage();
	for (;;)
	{
		ExMessage mouse = getmessage();
		if (mouse.message == WM_LBUTTONDOWN)
		{
			if (551 < mouse.x && mouse.x < 876 && 760 < mouse.y && mouse.y < 851) // ���ذ�ť
			{
				cleardevice();
				return;
			}
		}
	}
	return;
}

void zhizuozu()// ������ҳ��
{
	loadpicturezhizuozu();
	putimage(0, 0, &imgzhizuozu);
	ExMessage mouse = getmessage();
	for (;;)
	{
		ExMessage mouse = getmessage();
		if (mouse.message == WM_LBUTTONDOWN)
		{
			if (42 < mouse.x && mouse.x < 191 && 28 < mouse.y && mouse.y < 95)//���ذ�ť
			{
				cleardevice();
				return;
			}
		}
	}
	return;
}

void Gamegonglue(int page)// ��Ϸ�淨
{
	loadpicturegamegonglue();
	putimage(0, 0, &imggamegonglue[page]);
	for (;;)
	{
		ExMessage mouse = getmessage();
		if (mouse.message == WM_LBUTTONDOWN)
		{
			if (30 < mouse.x && mouse.x < 258 && 801 < mouse.y && mouse.y < 871)//��һҳ��ť
			{
				//cleardevice();
				Gamegonglue(page - 1);
			}
			else if (1190 < mouse.x && mouse.x < 1428 && 801 < mouse.y && mouse.y < 871)//��һҳ��ť
			{
				//cleardevice();
				Gamegonglue(page + 1);
			}
			else if (14 < mouse.x && mouse.x < 169 && 14 < mouse.y && mouse.y < 86)//�����˳���ť
			{
				cleardevice();
				return;
			}
		}
	}
	return;
}

void Tongjishuju()// ͳ������
{
	loadpicturetongjishuju();
	putimage(0, 0, &imgtongjishuju);
	ExMessage mouse = getmessage();
	for (;;)
	{
		ExMessage mouse = getmessage();
		if (mouse.message == WM_LBUTTONDOWN)
		{
			if (16 < mouse.x && mouse.x < 172 && 19 < mouse.y && mouse.y < 84)// ���ذ�ť
			{
				cleardevice();
				return;
			}
		}
	}
	return;
}

void Options() // ѡ��
{
	loadpictureoption();
	putimage(0, 0, &imgoption);
	for (;;)
	{
		
		ExMessage mouse = getmessage();
		if (mouse.message == WM_LBUTTONDOWN)
		{
			if (263 < mouse.x && mouse.x < 706 && 100 < mouse.y && mouse.y < 169)//��Ϸ�淨��ť
			{
				cleardevice();
				Gamegonglue(0);
				putimage(0, 0, &imgoption);
			}
			else if (741 < mouse.x && mouse.x < 1188 && 100 < mouse.y && mouse.y < 169)//�����鰴ť
			{
				cleardevice();
				zhizuozu();
				putimage(0, 0, &imgoption);
			}
			else if (426 < mouse.x && mouse.x < 1022 && 640 < mouse.y && mouse.y < 708)//����˳���ť
			{
				cleardevice();
				return;
			}
			else if (262 < mouse.x && mouse.x < 707 && 260 < mouse.y && mouse.y < 332)//��Ʒ����ť
			{
				cleardevice();
				Itembook(0);
				putimage(0, 0, &imgoption);
			}
			else if (742 < mouse.x && mouse.x < 1187 && 260 < mouse.y && mouse.y < 332)//���߲���ť
			{
				cleardevice();
				Propsbook(0);
				putimage(0, 0, &imgoption);
			}
			else if (262 < mouse.x && mouse.x < 707 && 330 < mouse.y && mouse.y < 402)//��������ť
			{
				cleardevice();
				Essencebook(0);
				putimage(0, 0, &imgoption);
			}
		}
	}
	return;
}

void Itembook(int Item1)// ��Ʒ������
{
	loadpictureItembook();
	putimage(0, 0, &imgItembook[Item1]);
	for (;;)
	{
		ExMessage mouse = getmessage();
		if (mouse.message == WM_LBUTTONDOWN)
		{
			if (15 < mouse.x && mouse.x < 187 && 790 < mouse.y && mouse.y < 871)//��һҳ��ť
			{
				if (Item1 > 0) {
					Itembook(Item1 - 1);
					return;
				}
			}
			else if (1245 < mouse.x && mouse.x < 1430 && 790 < mouse.y && mouse.y < 845)//��һҳ��ť
			{
				if (Item1 < 11) {
					Itembook(Item1 + 1);
					return;
				}
			}
			else if (6 < mouse.x && mouse.x < 124 && 8 < mouse.y && mouse.y < 53)//�����˳���ť
			{
				cleardevice();
				break;
			}
		}
	}
	return;
}

void Propsbook(int Props1)// ���߲�����
{
	loadpicturePropsbook();
	putimage(0, 0, &imgPropsbook[Props1]);
	for (;;)
	{
		ExMessage mouse = getmessage();
		if (mouse.message == WM_LBUTTONDOWN)
		{
			if (30 < mouse.x && mouse.x < 258 && 730 < mouse.y && mouse.y < 871)//��һҳ��ť
			{
				if (Props1 > 0) {
					Propsbook(Props1 - 1);
					return;
				}
			}
			else if (1190 < mouse.x && mouse.x < 1428 && 730 < mouse.y && mouse.y < 871)//��һҳ��ť
			{
				if (Props1 < 2) {
					Propsbook(Props1 + 1);
					return;
				}
			}
			else if (14 < mouse.x && mouse.x < 169 && 14 < mouse.y && mouse.y < 86)//�����˳���ť
			{
				cleardevice();
				break;
			}
		}
	}
	return;
}

void Essencebook(int Essence1)// ����������
{
	loadpictureEssencebook();
	putimage(0, 0, &imgEssencebook[Essence1]);
	for (;;)
	{
		ExMessage mouse = getmessage();
		if (mouse.message == WM_LBUTTONDOWN)
		{
			if (30 < mouse.x && mouse.x < 258 && 730 < mouse.y && mouse.y < 871)//��һҳ��ť
			{
				if (Essence1 > 0) {
					Essencebook(Essence1 - 1);
					return;
				}
			}
			else if (1190 < mouse.x && mouse.x < 1428 && 730 < mouse.y && mouse.y < 871)//��һҳ��ť
			{
				if (Essence1 < 2) {
					Essencebook(Essence1 + 1);
					return;
				}
			}
			else if (14 < mouse.x && mouse.x < 169 && 14 < mouse.y && mouse.y < 86)//�����˳���ť
			{
				cleardevice();
				break;
			}
		}
	}
	return;
}

void chuwujian()// �����
{

}

void choice()// ѡ�������Ʒ
{
	//loadpicturechoice();
	putimage(0, 0, &imgchoice);
	return;
}

void additem(vector<Thing*>* category, vector<Thing*>* selectedElements)//�����Ʒ
{
	//loadpicturechoiceitem();
	for (int i = 0; i < 3; ++i) {
		int b = 152 + i * 373;
		int a = 247;
		//cout << 1 << endl;
		if ((*selectedElements)[i]->getName() == "bee") {
			putimage(b, a, &imgchoiceitem[0]);
		}
		else if ((*selectedElements)[i]->getName() == "bubble") {
			putimage(b, a, &imgchoiceitem[1]);
		}
		else if ((*selectedElements)[i]->getName() == "cat") {
			putimage(b, a, &imgchoiceitem[2]);
		}
		else if ((*selectedElements)[i]->getName() == "coconut") {
			putimage(b, a, &imgchoiceitem[3]);
		}
		else if ((*selectedElements)[i]->getName() == "coin") {
			putimage(b, a, &imgchoiceitem[4]);
		}
		else if ((*selectedElements)[i]->getName() == "cow") {
			putimage(b, a, &imgchoiceitem[5]);
		}
		else if ((*selectedElements)[i]->getName() == "fish") {
			putimage(b, a, &imgchoiceitem[6]);
		}
		else if ((*selectedElements)[i]->getName() == "goldegg") {
			putimage(b, a, &imgchoiceitem[7]);
		}
		else if ((*selectedElements)[i]->getName() == "goose") {
			putimage(b, a, &imgchoiceitem[8]);
		}
		else if ((*selectedElements)[i]->getName() == "halfcoconut") {
			putimage(b, a, &imgchoiceitem[9]);
		}
		else if ((*selectedElements)[i]->getName() == "hugetreasure") {
			putimage(b, a, &imgchoiceitem[10]);
		}
		else if ((*selectedElements)[i]->getName() == "key") {
			putimage(b, a, &imgchoiceitem[11]);
		}
		else if ((*selectedElements)[i]->getName() == "lockbox") {
			putimage(b, a, &imgchoiceitem[12]);
		}
		else if ((*selectedElements)[i]->getName() == "magickey") {
			putimage(b, a, &imgchoiceitem[13]);
		}
		else if ((*selectedElements)[i]->getName() == "milk") {
			putimage(b, a, &imgchoiceitem[14]);
		}
		else if ((*selectedElements)[i]->getName() == "monkey") {
			putimage(b, a, &imgchoiceitem[15]);
		}
		else if ((*selectedElements)[i]->getName() == "pearl") {
			putimage(b, a, &imgchoiceitem[16]);
		}
		else if ((*selectedElements)[i]->getName() == "rain") {
			putimage(b, a, &imgchoiceitem[17]);
		}
		else if ((*selectedElements)[i]->getName() == "steelsafe") {
			putimage(b, a, &imgchoiceitem[18]);
		}
		else if ((*selectedElements)[i]->getName() == "strawberry") {
			putimage(b, a, &imgchoiceitem[19]);
		}
		else if ((*selectedElements)[i]->getName() == "sun") {
			putimage(b, a, &imgchoiceitem[20]);
		}
		else if ((*selectedElements)[i]->getName() == "treasure") {
			putimage(b, a, &imgchoiceitem[21]);
		}
		else if ((*selectedElements)[i]->getName() == "flower") {
			putimage(b, a, &imgchoiceitem[22]);
		}
	}
	return;
}

void addprops(vector<Props*>* category, vector<Props*>* selectedElements)//��ӵ���
{
	//loadpicturechoiceprops();
	for (int i = 0; i < 3; ++i) {
		int b = 152 + i * 373;
		int a = 247;
		if ((*selectedElements)[i]->getName() == "�ں���") {
			putimage(b, a, &imgchoiceprops[0]);
		}
		else if ((*selectedElements)[i]->getName() == "�̺���") {
			putimage(b, a, &imgchoiceprops[1]);
		}
		else if ((*selectedElements)[i]->getName() == "������") {
			putimage(b, a, &imgchoiceprops[2]);
		}
		else if ((*selectedElements)[i]->getName() == "���Ӱ�������") {
			putimage(b, a, &imgchoiceprops[3]);
		}
		else if ((*selectedElements)[i]->getName() == "����") {
			putimage(b, a, &imgchoiceprops[4]);
		}
	}
	return;
}

void addessence(vector<Essence*>* category, vector<Essence*>* selectedElements)//��Ӿ���
{
	//loadpicturechoiceessence();
	for (int i = 0; i < 3; ++i) {
		int b = 152 + i * 373;
		int a = 247;
		if ((*selectedElements)[i]->getName() == "�ں���") {
			putimage(b, a, &imgchoiceessence[0]);
		}
		else if ((*selectedElements)[i]->getName() == "�ཷ") {
			putimage(b, a, &imgchoiceessence[1]);
		}
		else if ((*selectedElements)[i]->getName() == "������") {
			putimage(b, a, &imgchoiceessence[2]);
		}
		else if ((*selectedElements)[i]->getName() == "���Ӱ�������") {
			putimage(b, a, &imgchoiceessence[3]);
		}
		else if ((*selectedElements)[i]->getName() == "����") {
			putimage(b, a, &imgchoiceessence[4]);
		}
	}
	return;
}

void stick1(int& b, int& a) 
{
	int index = 173;
	int indey = 14;
	int sizex = 220;
	int sizey = 185;
	a = a * sizey + indey;
	b = b * sizex + index;
	return;
}

void tietu(vector<Thing*>* category, map<int, pair<int, int>>& itemMap) 
{
	//loadpictureitem();
	for (int i = 0; i < 20; ++i) {
		int b = itemMap[i].first;
		int a = itemMap[i].second;
		stick1(b, a);
		//cout << 1 << endl;
		if ((*category)[i]->getName() == "bee") {
			putimage(b, a, &imgitem[0]);
		}
		else if ((*category)[i]->getName() == "bubble") {
			putimage(b, a, &imgitem[1]);
		}
		else if ((*category)[i]->getName() == "cat") {
			putimage(b, a, &imgitem[2]);
		}
		else if ((*category)[i]->getName() == "coconut") {
			putimage(b, a, &imgitem[3]);
		}
		else if ((*category)[i]->getName() == "coin") {
			putimage(b, a, &imgitem[4]);
		}
		else if ((*category)[i]->getName() == "cow") {
			putimage(b, a, &imgitem[5]);
		}
		else if ((*category)[i]->getName() == "fish") {
			putimage(b, a, &imgitem[6]);
		}
		else if ((*category)[i]->getName() == "goldegg") {
			putimage(b, a, &imgitem[7]);
		}
		else if ((*category)[i]->getName() == "goose") {
			putimage(b, a, &imgitem[8]);
		}
		else if ((*category)[i]->getName() == "halfcoconut") {
			putimage(b, a, &imgitem[9]);
		}
		else if ((*category)[i]->getName() == "hugetreasure") {
			putimage(b, a, &imgitem[10]);
		}
		else if ((*category)[i]->getName() == "key") {
			putimage(b, a, &imgitem[11]);
		}
		else if ((*category)[i]->getName() == "lockbox") {
			putimage(b, a, &imgitem[12]);
		}
		else if ((*category)[i]->getName() == "magickey") {
			putimage(b, a, &imgitem[13]);
		}
		else if ((*category)[i]->getName() == "milk") {
			putimage(b, a, &imgitem[14]);
		}
		else if ((*category)[i]->getName() == "monkey") {
			putimage(b, a, &imgitem[15]);
		}
		else if ((*category)[i]->getName() == "pearl") {
			putimage(b, a, &imgitem[16]);
		}
		else if ((*category)[i]->getName() == "rain") {
			putimage(b, a, &imgitem[17]);
		}
		else if ((*category)[i]->getName() == "steelsafe") {
			putimage(b, a, &imgitem[18]);
		}
		else if ((*category)[i]->getName() == "strawberry") {
			putimage(b, a, &imgitem[19]);
		}
		else if ((*category)[i]->getName() == "sun") {
			putimage(b, a, &imgitem[20]);
		}
		else if ((*category)[i]->getName() == "treasure") {
			putimage(b, a, &imgitem[21]);
		}
		else if ((*category)[i]->getName() == "flower") {
			putimage(b, a, &imgitem[22]);
		}
	}
	return;
}

void xuanzhuan()// �ϻ�����ת��ȷ�ţ�
{
	int index = 0;
	isxuanzhuan = true;
	while (isxuanzhuan) {
		BeginBatchDraw();

		//cleardevice();
		putimage(0, 0, imgxuanzhuan + index);
		index++;

		EndBatchDraw();
		if (index >= 50)
		{
			break;
		}
		Sleep(77);
	}
	isxuanzhuan = false;
	//cleardevice();
	//ischoice1 = true;
	Playing();
	//��ת���ѡ��������main������������ִ�У�choice��Ҫ�ı���ֻ��main�������������������ò���
	//choice(punchboardItem, selectedElements);
	return;
}

void Playing()// ��ʽ��Ϸ������
{
	/*loadpicturebackground();
	loadpicturezhuanpan();*/
	
	putimage(0, 0, &imgbackground);
	putimage(159, 0, &imgzhuanpan);
	//istietu = true;
	//��ͼ����ͬ�ϣ��޷�ֱ�ӵ��õ�
	return;
}

void fangdong1()
{
	putimage(0, 0, &imgfangdong[0]);
	return;
}
void fangdong2()
{
	putimage(0, 0, &imgfangdong[1]);
	return;
}
void fangdong3()
{
	putimage(0, 0, &imgfangdong[2]);
	return;
}
void fangdong4()
{
	putimage(0, 0, &imgfangdong[3]);
	return;
}
void fangdong5()
{
	putimage(0, 0, &imgfangdong[4]);
	return;
}
void fangdong6()
{
	putimage(0, 0, &imgfangdong[5]);
	return;
}
void fangdong7()
{
	putimage(0, 0, &imgfangdong[6]);
	return;
}
void fangdong8()
{
	putimage(0, 0, &imgfangdong[7]);
	return;
}
void fangdong9()
{
	putimage(0, 0, &imgfangdong[8]);
	return;
}
void fangdong10()
{
	putimage(0, 0, &imgfangdong[9]);
	return;
}
void fangdong11()
{
	putimage(0, 0, &imgfangdong[10]);
	return;
}
void fangdong12()
{
	putimage(0, 0, &imgfangdong[11]);
	return;
}



//for (;;)
//{
//	ExMessage mouse = getmessage();
//	if (mouse.message == WM_LBUTTONDOWN)
//	{
//		if (173 < mouse.x && mouse.x < 342 && 150 < mouse.y && mouse.y < 228)//ѡ�ť
//		{
//			cleardevice();
//			Options2();
//		}
//		else if (1070 < mouse.x && mouse.x < 1254 && 150 < mouse.y && mouse.y < 228)//����䰴ť
//		{
//			cleardevice();
//			chuwujian();
//		}
//		else if (647 < mouse.x && mouse.x < 767 && 640 < mouse.y && mouse.y < 733)//������ť
//		{
//			//cleardevice();
//			Playing();
//		}
//	}
//}
void jiesuan1()
{
	putimage(0, 0, &imgjiesuan[0]);
	return;
}
void jiesuan2()
{
	putimage(0, 0, &imgjiesuan[1]);
	return;
}
void jiesuan3()
{
	putimage(0, 0, &imgjiesuan[2]);
	return;
}
void jiesuan4()
{
	putimage(0, 0, &imgjiesuan[3]);
	return;
}
void jiesuan5()
{
	putimage(0, 0, &imgjiesuan[4]);
	return;
}
void jiesuan6()
{
	putimage(0, 0, &imgjiesuan[5]);
	return;
}
void jiesuan7()
{
	putimage(0, 0, &imgjiesuan[6]);
	return;
}
void jiesuan8()
{
	putimage(0, 0, &imgjiesuan[7]);
	return;
}
void jiesuan9()
{
	putimage(0, 0, &imgjiesuan[8]);
	return;
}
void jiesuan10()
{
	putimage(0, 0, &imgjiesuan[9]);
	return;
}
void jiesuan11()
{
	putimage(0, 0, &imgjiesuan[10]);
	return;
}
void jiesuan12()
{
	putimage(0, 0, &imgjiesuan[11]);
	return;
}

void final()
{
	//loadpicturefinal_lose();
	putimage(0, 0, &imgfinal_lose);
	return;
}

/*
			   _ooOoo_
			  o8888888o
			  88" . "88
			  (| -_- |)
			  O\  =  /O
		   ____/`---'\____
		.'  \\|     |//  `.
		/  \\|||  :  |||//  \
	   /  _||||| -:- |||||-  \
	   |   | \\\  -  /// |   |
	   | \_|  ''\---/''  |   |
	   \  .-\__  `-`  ___/-. /
	 ___`. .'  /--.--\  `. . __
  ."" '<  `.___\_<|>_/___.'  >'"".
 | | :  `- \`.;`\ _ /`;.`/ - ` : | |
 \  \ `-.   \_ __\ /__ _/   .-` /  /
======`-.____`-.___\_____/___.-`____.-'======
				   `=---='
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
	���汣��       ����崻�     ����BUG
*/
