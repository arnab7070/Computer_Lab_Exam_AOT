#include<stdio.h>
int main()
{
    int result;
    scanf("%d",&result);
    switch (result>=40)
    {
    case 1:
        switch (result>=50)
        {
        case 1:
            switch (result>=60)
            {
            case 1:
                switch (result>=70)
                {
                case 1:
                    switch (result>=80)
                    {
                    case 1:
                        switch (result>=90&&result<=100)
                        {
                        case 1:
                            printf("Grade = O");
                            break;
                        case 0:
                            printf("Grade = E");
                        }
                        break;
                    case 0:
                        printf("Grade = A");
                        break;
                    }
                    break;
                case 0:
                    printf("Grade = B");
                }
                break;
            case 0:
                printf("Grade = C");
                break;
            }
            break;
        case 0:
            printf("Grade = D");
            break;
        }
        break;
    case 0:
        switch (result>=0)
        {
        case 1:
            printf("F(FAILED)");
            break;
        case 0:
            printf("INVALID INPUT");
        }
    }
    return 0;
}