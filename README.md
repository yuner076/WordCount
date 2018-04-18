# WordCount<br>
## 项目简介<br>
WordCount 1.0 是一个能够实现一个命令行文本计数统计程序，能正确统计导入的纯英文txt文本中的字符数，单词数，句子数，若不是纯英文文本会出错。<br>
<br>
## 相关用法<br>
1. 将纯英文文本txt文件放在与可执行程序同一个文件夹里<br>
2. 打开cmd，输入可执行程序所在的文件夹路径<br>
3. 再输入命令<br>
* 命令模式：wc.exe [参数] [文件名]<br>
* wc.exe -c file.txt 统计字符数<br>
* wc.exe -w file.txt 统计单词数<br>
* wc.exe -s file.txt 统计句子数<br>
4. 如果输入的文件不存在，则输出Open the file failed.<br>
如果输入错误的命令参数，则输出There is no this function.<br>
## 文件列表<br>
* wc.cpp<br>
* wc.exe<br>
* test1.txt(内容：空)<br>
* test2.txt(内容：It was the best of times, it was the worst of times, it was the age of wisdom, it was the age of foolishness, it was the epoch of belief, it was the epoch of incredulity, it was the season of Light, it was the season of Darkness, it was the spring of hope, it was the winter of despair. We had everything before us, we had nothing before us, we were all going direct to Heaven, we were all going direct the other way in short, the period was so far like the present period, that some of its noisiest authorities insisted on its being received, for good or for evil, in the superlative degree of comparison only.)<br>
## 例程运行及结果<br>
