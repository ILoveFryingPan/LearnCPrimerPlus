//
// Created by android0 on 2021/6/11.
//

/* count.c --使用标准I/O */
#include<stdio.h>
#include<stdlib.h>  //提供exit()的原型
#include<string.h>

char * name_get(char *data, int num, FILE *fp);

int main(int argc, char *argv[])
{
    int ch; //读取文件时，储存每个字符的地方
	char name[21];
    FILE *fp;   //文件指针
    unsigned long count = 0;
	
	fprintf(stdout, "请输入文件名，文件名最多20个字符（包括扩展名）");
	
	while(!name_get(name, 21, stdin))
	{
		fprintf(stdout, "请输入规定内的文件名，文件名最多20个字符（包括扩展名）");
	}
	
    //if(argc != 2)
    //{
    //    printf("Usage: %s filename\n", argv[0]);
    //    exit(EXIT_FAILURE);
    //}
    if((fp = fopen(name, "r")) == NULL)
    {
        printf("Can't open %s\n", name);
        exit(EXIT_FAILURE);
    }
    while((ch = getc(fp)) != EOF)
    {
        putc(ch, stdout);   //与putchar(ch);相同
        count++;
    }
    fclose(fp);
    printf("File %s has %lu characters\n", name, count);
    return 0;
}

char * name_get(char *data, int num, FILE *fp)
{
	char *result, *index;
	if(!fp)
	{
		fp = stdin;
	}
	
	result = fgets(data, num, fp);
	if(result) 
	{
		index = strchr(data, '\n');
		if(index)
			*index = '\0';
		else
		{
			if(!feof(fp) && !ferror(fp)) {
				if(getc(fp) != '\n') {
					while(getc(fp) != '\n');
					data[0] = '\0';
					result = NULL;
				}
			}
		}
	}
	return result;
}
	