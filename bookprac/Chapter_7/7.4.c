/* 7.4.c--��ά�������������ת�ú��� */
void read(int array[][3]);  /* ��ά�������������ת�ú��������� */
void transposition(int array[][3]);
void write(int array[][3]);
int main(void)
{
    int array[3][3];
    read(array);
    transposition(array);
    write(array);
    getchar();
    getchar();
    return 0;
}
void read(int array[][3])  /* ��������������õ����� */
{
    int i,j;
    printf("������Ÿ������Կո�ֿ�:"); 
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&array[i][j]);
        }
    } 
    return;
}
void transposition(int array[][3]) 
{
    int i,j,arraycopy[3][3];
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            arraycopy[i][j]=array[i][j];  
            /* ����һ����ȡ�õ����飬��Ϊԭ����Ĳ�ͬ�ط���ֵ���粻������Ϊԭ����ı���ֵʱ��ı�֮ǰҪ�õ����� */ 
        }
    } 
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            array[j][i]=arraycopy[i][j];    /* ͨ�����ƺ���Ϊԭ���鸴�Ƶķ�����ʹԭ�����ֵ�ı䣬�����Ǹı�����Ĵ��� */ 
        }
    } 
    return;
}
void write(int array[][3])
{
    int i,j;
    printf("ת�ú�����Ϊ��\n"); 
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",array[i][j]);
        }
        printf("\n");
    } 
    return;
}
