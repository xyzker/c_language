#include <stdio.h>

#define MAXLINE 1000 // 最大输入行长度

int get_line(char line[], int max);
int string_index(char source[], char searchfor[]);

char pattern[] = "ould"; // 待查询字符串

// 找出所有被匹配中的行
int main()
{
    char line[MAXLINE];
    int found = 0;

    while (get_line(line, MAXLINE) > 0) {
        if (string_index(line, pattern) >= 0) {
            printf("%s", line);
            found++;
        }
    }

    return found;
}

// 将行保存到s中，并返回该行的长度
int get_line(char s[], int lim)
{
    int c, i;

    i = 0;
    while (--lim > 0 && (c=getchar()) != EOF && c != '\n') { // 【表示对 getchar() 一回车就执行。如何在命令行敲出段落的效果？】
        s[i++] = c;
    }

    if (c == '\n') {
        s[i++] = c;
    }

    s[i] = '\0';
    
    return i;
}

// 返回t在s中的位置， 若没找到则返回-1
int string_index(char s[], char t[])
{
    int i, j , k;

    for (i = 0; s[i] != '\0'; i++) {
        for (j=i, k=0; t[k] != '\0' && s[j] == t[k]; j++, k++)
            ;

        if (k > 0 && t[k] == '\0' ) 
            return i;
    }

    return -1;
}