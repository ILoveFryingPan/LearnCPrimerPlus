//
// Created by android0 on 2021/6/11.
//

/* count.c --ʹ�ñ�׼I/O */
#include<stdio.h>
#include<stdlib.h>  //�ṩexit()��ԭ��
#include<string.h>

char * name_get(char *data, int num, FILE *fp);

int main(int argc, char *argv[])
{
    int ch; //��ȡ�ļ�ʱ������ÿ���ַ��ĵط�
	char name[21];
    FILE *fp;   //�ļ�ָ��
    unsigned long count = 0;
	
	fprintf(stdout, "�������ļ������ļ������20���ַ���������չ����");
	
	while(!name_get(name, 21, stdin))
	{
		fprintf(stdout, "������涨�ڵ��ļ������ļ������20���ַ���������չ����");
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
        putc(ch, stdout);   //��putchar(ch);��ͬ
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
	