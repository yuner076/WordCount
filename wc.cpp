#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
 
int charcount;  		//�����ַ��� 
int wordcount;		//���嵥���� 
int sentencecount;	//��������� 

void count(char*file);		//����ͳ�ƺ��� 
 
int main(int argc, char* argv[])              
{	
    while(1)
    {
		count(argv[2]);			//ִ��ͳ�ƺ��� 
        if(!strcmp(argv[1],"-c")) 						//����������Ϊ-c��������ַ�ͳ�ƽ�� 
		{                 
            printf("Characters:%d\n",charcount);		 
        } 
        else if(!strcmp(argv[1],"-w"))                   	//����������Ϊ-w�����������ͳ�ƽ�� 
        { 
		    printf("Words:%d\n",wordcount);
        } 
		else if(!strcmp(argv[1],"-s"))                 		//����������Ϊ-s�����������ͳ�ƽ�� 
        { 
		    printf("Sentences:%d\n",sentencecount);
        } 
		else												//�������������������������޴˹��� 
        { 
		    printf("There is no this function.\n");		
        } 
        printf("\n");
        scanf("%s%s%s",argv[0],argv[1],argv[2]);			//�ȴ��������׼����һ������ 
    }
    return 0;
}
 
void count(char*file)		//ͳ�ƺ��� 
{
	char a;
	int flag=0;
	charcount=0; 
	wordcount=0;
	sentencecount=0;
    FILE *fp; 
    if((fp=fopen(file,"r"))==NULL)					//����ļ���ʧ�ܣ�������ļ���ʧ��,�˳����� 
    {   
        printf("Open the file failed.\n");
        exit(-1);
    }
	while(!feof(fp))
    {
		charcount++;		//ͳ���ַ��� 
        a=fgetc(fp);
        if(isalpha(a)&&flag==0)
        {
        	wordcount++;		//ͳ�Ƶ����� 
        	flag=1;
		}
        if(!isalpha(a)&&flag==1)
		{
			flag=0;   
		}   
        if(a=='.'||a=='!'||a=='?')
            sentencecount++;		//ͳ�ƾ����� 
    } 
    charcount--;          
    fclose(fp);
}
