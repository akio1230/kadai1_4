// kadai1_4.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <stdio.h>

int main()
{
    int amount;
    int fh;
    int hundred;
    int fifty;
    int tenn;
    int five;
    int one;
    int num = 0;
    int num1;
    char input;

    while (true)
    {
        printf("1以上の金額を入力してください\n");
        scanf_s("%d", &amount);

        fh = amount / 500;
        amount = amount % 500;
        hundred = amount / 100;
        amount = amount % 100;
        fifty = amount / 50;
        amount = amount % 50;
        tenn = amount / 10;
        amount = amount % 10;
        five = amount / 5;
        amount = amount % 5;
        one = amount / 1;
        amount = amount % 1;

        printf("-------------------------------------\n");

        if (0 != fh)
        {
            printf("500円玉は %d枚 です\n", fh);
        }
        if (0 != hundred)
        {
            printf("100円玉は %d枚 です\n", hundred);
        }
        if (0 != fifty)
        {
            printf("50円玉は %d枚 です\n", fifty);
        }
        if (0 != tenn)
        {
            printf("10円玉は %d枚 です\n", tenn);
        }
        if (0 != five)
        {
            printf("5円玉は %d枚 です\n", five);
        }
        if (0 != one)
        {
            printf("1円玉は %d枚 です\n", one);
        }


        printf("---------------------------------------\n");

        printf("計算を続けますか？続けるのならyを押してください、終わるのならyいがいを押してください\n");

        num++;
        

        scanf_s("%c", &input);


        if (input != 'y' && input != 'Y')
        {
            printf("合計両替回数は %d回 です", num);
            //printf("合計金額は $d円 です", num1);
            break;
        }

    }
    return 0;
}

