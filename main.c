#include <stdio.h>
#include <string.h>
char* s_gets(char* st,int n);
#define FUNDLEN 50

struct funds
{
    char bank[FUNDLEN];
    double bankfund;
    char savr[FUNDLEN];
    double savefund;
};

double sum(const struct funds *);

int main(void)
{
    struct funds stan={
            "Garlic-Melon bank",
            4032.27,
            "Lucky's Savings and Loan",
            8543.94
    };
    printf("Stan has a total of $%.2f.\n",
           sum(&stan));

    getchar();
    getchar();
    return 0;
}

double sum(const struct funds* money)
{
    return (money->bankfund+money->savefund);
}

char* s_gets(char *st,int n)
{
    char* ret_val;
    char* find;

    ret_val= fgets(st,n,stdin);
    if(ret_val)
    {
        find= strchr(st,'\n');
        if(find) *find='\0';
        else while (getchar()!='\n') continue;
    }
    return ret_val;
}