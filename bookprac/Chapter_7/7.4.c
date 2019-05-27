/* 7.4.c--二维数组输入输出及转置函数 */
void read(int array[][3]);  /* 二维数组输入输出即转置函数的声明 */
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
void read(int array[][3])  /* 传入主函数定义好的数组 */
{
    int i,j;
    printf("请输入九个数，以空格分开:"); 
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
            /* 复制一个读取好的数组，来为原数组的不同地方赋值，如不复制则为原数组改变其值时会改变之前要用到数据 */ 
        }
    } 
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            array[j][i]=arraycopy[i][j];    /* 通过复制后在为原数组复制的方法来使原数组的值改变，而不是改变输出的次序 */ 
        }
    } 
    return;
}
void write(int array[][3])
{
    int i,j;
    printf("转置后数组为：\n"); 
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
