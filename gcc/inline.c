/* inline.c */

int main()
{
    int a = 10, b = 0;

    __asm__ __volatile__("movl %1, %%eax;\n\r"
                         "movl %%eax, %0;"
                         :"=r"(b)      /* ��� */
                         :"r"(a)       /* ���� */
                         :"%eax");     /* ����Ӱ��ļĴ��� */

    printf("Result: %d, %d\n", a, b);
}