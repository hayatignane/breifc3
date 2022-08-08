#include <stdio.h>

int main()
{
    int m;
    int NBC1[13];
    int NBC2[15];
    int tri[28];
    int i, j, N, moy,k=13;
    int c =0;
    int min, max;
do{
    printf ("to exit from the program enter 0");
    printf("give the number of class : ");
    scanf("%d", &N);
    switch (N)
    {
    case 1:
        printf("please enter marks for class 1:\n");
        for (i = 0; i < 13; i++)
        {
            printf("NBC[%d]= ", i);
            scanf("%d", &NBC1[i]);
        }
        max = NBC1[0];
        min = NBC1[0];
    
        for (i = 1; i < 13; i++)
        {
            if (max < NBC1[i])
                max = NBC1[i];
        }
        for (i = 1; i < 13; i++)

        {
            if (NBC1[i] < min)
                min = NBC1[i];
        }
        for (i = 0; i < 13; i++)
                {if (NBC1[i]>=10 ) {c++;}
                }
                printf ("the number of student>=10 est:%d\n",c);
        printf("the firs mark is:%d\nthe last mark is: %d\n ", max, min);
        break;

    case 2:
        printf("please enter marks for class 2:\n");
        c=0;
        for (i = 0; i < 15; i++)
        {
            printf("NBC[%d]= ", i);
            scanf("%d", &NBC2[i]);
        }
        max = NBC2[0];
        min = NBC2[0];
        for (i = 1; i < 15; i++)
        {
            if (max < NBC2[i])
                max = NBC2[i];
        }
        for (i = 1; i < 15; i++)
        {
            if (min > NBC2[i])
                min = NBC2[i];
        }
                for (i = 0; i < 15; i++)
                {if (NBC2[i]>=10 ) {c++;}
                }
                printf ("the number of student>=10 est:%d\n",c);
        
        printf("the first mark is:%d\n the last mark is: %d\n", max, min);
        break;
    case 3:
        printf("please enter the marks of two classes :\n");
    for (i = 0; i < 13; i++)
    {
        tri[i]=NBC1[i];
    }
    for (i = 0; i < 15; i++)
    {
         tri[k]=NBC2[i];
         k++;
    }
    for (i=0;i<27;i++)
     for (j = i + 1; j < 28; j++)
        { 
            if (tri[i] > tri[j])
            {
                m = tri[i];
                tri[i] = tri[j];
                tri[j] = m;
            }
}
            printf ("he marks of two classes in ascending order is:");
            for (i = 0; i < 28; i++){
                printf("%d\t",tri[i]);
            }

    default:
        printf("can you choose 1 or 2 or 3");
    }
    }while(N!=0);
    }