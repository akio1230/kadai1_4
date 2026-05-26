// kadai1_4.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <stdio.h>

int main()
{
    int amount;
    int fh = 500;
    int hundred = 100;
    int fifty = 50;
    int tenn = 10;
    int one = 1;

    printf("1以上の金額を入力してください\n");
    scanf_s("%d\n", &amount);
    
    /*入力した数値が500より上だったら500で割る
      500より下だったら100でまず割る
      以下略
    */;


    return 0;
}

