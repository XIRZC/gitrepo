/* 8.10.c--����Ԫ�ط��ú��� */
#include<stdio.h>
#define N 5
#define M 5 
void place(int (*pt)[M]);
int main(void)
{
    int matrix[N][M]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25};
    int i,j;
    place(matrix);
    for(i=0;i<N;i++)
    {
        for(j=0;j<M;j++)
        {
            printf("%d\t",*(*(matrix+i)+j));
        }
        printf("\n");
    }
    return 0;
}
void place(int (*pt)[M])  /* ����Ĳ���Ϊָ��һ���ں�M��Ԫ�ص�һά�����ָ�� */ 
{
    int i,j,count=0;
    int temp[25],tempo;
    for(i=0;i<N;i++)
    {
        for(j=0;j<M;j++)
        {
            temp[N*i+j]=pt[i][j];  /* ��άתһά���Ա����� */ 
        }
    }
    for(i=0;i<N;i++)  /* ͨ��ѡ������õ�һ���ź������ʱ���� */
    {
        int k=i;
        for(j=i;j<M;j++)
        {
			if(temp[k]>temp[j])
			{
				k=j;
			}
        }
        if(k!=i)
        {
        	tempo=temp[k];
        	temp[k]=temp[i];
        	temp[i]=tempo;
		}
    }
    pt[N/2][M/2]=temp[N*M-1];
    pt[0][0]=temp[0];
    pt[0][M-1]=temp[1];
    pt[N-1][0]=temp[2];
    pt[N-1][M-1]=temp[3];
    return;
}

