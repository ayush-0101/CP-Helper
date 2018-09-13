#include <stdio.h>
#include <string.h>

#define red         "\x1B[31m"
#define green       "\x1B[32m"
#define yellow      "\x1B[33m"
#define blue        "\x1B[34m"
#define cyan        "\x1B[36m"
#define white       "\x1B[37m"
#define NORMAL      "\x1B[0m"
#define white_back  "\x1B[47m"

#define reset(x) memset(x,'\0',sizeof(x))

void compareFiles(FILE *fp1, FILE *fp2)
{
	char Aline[80], Eline[80], ch1, ch2;
	int correct = 1, wa_judged = 0, count_lines = 0;
	
	reset(Aline);
	reset(Eline);
	
	while(1)
	{
		int p1 = 0, p2 = 0, stop_Aline = 0, stop_Eline = 0;
		correct = 1;
		count_lines++;
		
		while(stop_Aline == 0 && stop_Eline == 0)
		{
			if(stop_Aline == 0)
			{
				ch1 = getc(fp1);
				if(ch1 != '\n')
				{
					Aline[p1] = ch1;
					p1++;
				}
				else
					stop_Aline = 1;
			}
			
			if(stop_Eline == 0)
			{
				ch2 = getc(fp2);
				if(ch2 != '\n')
				{
					Eline[p2] = ch2;
					p2++;
				}
				else
					stop_Eline = 1;
	 		}
	 		
	 		if(correct)
	 		{
				if((stop_Aline == 1 && stop_Eline == 0) || (stop_Aline == 0 && stop_Eline == 1) || (ch1 != ch2))
					correct = 0;
			}
		}
		
		if(!correct)
			break;
		else
		{
			ch1 = getc(fp1);
			ch2 = getc(fp2);
			fseek(fp1,-1,SEEK_CUR);
			fseek(fp2,-1,SEEK_CUR);
			
			if(ch1 == EOF && ch2 == EOF)
				break;
			else if(ch1 == EOF)
			{
				printf("%sVerdict: %sWrong Answer! 'Presentation error(EOF)'\n",yellow,red);
				printf("%sYou're printing less data than required!%s\n\n",cyan,NORMAL);			
				wa_judged = 1;
				correct = 0;
				break;
			}
			else if(ch2 == EOF)
			{
				printf("%sVerdict: %sWrong Answer! 'Presentation error(EOF)'\n",yellow,red);
				printf("%sYou're printing more data than required!%s\n\n",cyan,NORMAL);			
				wa_judged = 1;
				correct = 0;
				break;
			}
		}
		
		reset(Aline);
		reset(Eline);
	}
	
	if(correct)
		printf("%sVerdict : %sOK :) Passed all test cases !%s\n\n",yellow,green,NORMAL);
	else if(!wa_judged)
	{
		printf("%sVerdict : %sWrong Answer ! 'Token(s) error'\n\n",yellow,red);
		printf("%sExpected : %s%s%s%s\n\n",cyan,white_back,red,Eline,NORMAL);
		printf("%sFound : %s%s%s%s\n\n",cyan,white_back,red,Aline,NORMAL);
		printf("%sAt line : %d%s\n\n",cyan,count_lines,NORMAL);
		
		printf("Need the corresponding Test Case ? (y/n) ");
		char ch;
		scanf("%c",&ch);
		
		if(ch == 'y')
		{
			int test_lines;
			printf("Lines per Test Case ? : ");
			scanf("%d",&test_lines);
			FILE *fp = fopen("testfile.txt","r");
			char line[80];
			int start = (test_lines * count_lines)-(test_lines-2), cnt = 0;
			printf("------------------------------------------------------\n\n");
			while(fgets(line,sizeof(line),fp))
			{
				cnt++;
				if(cnt==start)
				{
					while(cnt<(start+test_lines))
					{
						printf("%s",line);
						fgets(line,sizeof(line),fp);
						cnt++;
					}
					break;
				}
			}
			printf("\n------------------------------------------------------\n");
		}
	}
}

int main()
{
	FILE *fp1 = fopen("Aoutput.txt", "r");
	FILE *fp2 = fopen("Eoutput.txt", "r");

	if (fp1 == NULL)
		printf("Error in opening file 'Aoutput.txt' !\n");
	else if (fp2 == NULL)
		printf("Error in opening file 'Eoutput.txt' !\n");
	else 
		compareFiles(fp1, fp2);
	// Closing files now...
	fclose(fp1);
	fclose(fp2);
	return 0;
}

