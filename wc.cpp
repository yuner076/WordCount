#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
 
int charcount;  		//定义字符数 
int wordcount;		//定义单词数 
int sentencecount;	//定义句子数 

void count(char*file);		//声明统计函数 
 
int main(int argc, char* argv[])              
{	
    while(1)
    {
		count(argv[2]);			//执行统计函数 
        if(!strcmp(argv[1],"-c")) 						//如果命令参数为-c，则输出字符统计结果 
		{                 
            printf("Characters:%d\n",charcount);		 
        } 
        else if(!strcmp(argv[1],"-w"))                   	//如果命令参数为-w，则输出单词统计结果 
        { 
		    printf("Words:%d\n",wordcount);
        } 
		else if(!strcmp(argv[1],"-s"))                 		//如果命令参数为-s，则输出句子统计结果 
        { 
		    printf("Sentences:%d\n",sentencecount);
        } 
		else												//如果输入错误命令参数，则输出无此功能 
        { 
		    printf("There is no this function.\n");		
        } 
        printf("\n");
        scanf("%s%s%s",argv[0],argv[1],argv[2]);			//等待命令，继续准备下一次运行 
    }
    return 0;
}
 
void count(char*file)		//统计函数 
{
	char a;
	int flag=0;
	charcount=0; 
	wordcount=0;
	sentencecount=0;
    FILE *fp; 
    if((fp=fopen(file,"r"))==NULL)					//如果文件打开失败，则输出文件打开失败,退出程序 
    {   
        printf("Open the file failed.\n");
        exit(-1);
    }
	while(!feof(fp))
    {
		charcount++;		//统计字符数 
        a=fgetc(fp);
        if(isalpha(a)&&flag==0)
        {
        	wordcount++;		//统计单词数 
        	flag=1;
		}
        if(!isalpha(a)&&flag==1)
		{
			flag=0;   
		}   
        if(a=='.'||a=='!'||a=='?')
            sentencecount++;		//统计句子数 
    } 
    charcount--;          
    fclose(fp);
}
