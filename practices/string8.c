void main()
{
    char string1[20]="welcome";
    char string2[20]="Homeland";
    char string3[20]="to psr";
    strncat(string1,string2,4);
    strcat(string3,string2);
    printf("The string1:%s\n",string1);
    printf("The string3:%s\n",string3);
    printf("The string3 :%s\n",string2);
}
