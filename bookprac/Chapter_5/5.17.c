/* 5.17.c--��Ա���� */
#include<stdio.h>
int main(void)
{
	char i,j,k;
	printf("�������ֵ�����Ϊ��\n"); 
	/* ��iΪA��ս��ѡ��,jΪB��ս��ѡ�֣�kΪC��ս��ѡ��*/
	for(i='X';i<='Z';i++) 
	{
		for(j='X';j<='Z';j++)
		{
			if(i!=j)  /* ��սA��B��ѡ�ֲ���һ�� */ 
			{
				for(k='X';k<='Z';k++)
				{
					if(i!=k&&j!=k) /* ��սA��C�Լ���սC��B��ѡ�ֲ���һ�� */ 
					{
						if(i!='X'&&k!='X'&&k!='Z')
						/* A����X�ȣ�C����X��Y�� */ 
							
							printf("A  %c\nB  %c\nC  %c\n",i,j,k);
					}
				}
			}
		}
	}
	getchar(); 
	return 0;
}
