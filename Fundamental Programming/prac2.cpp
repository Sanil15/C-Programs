using namespace std;

#include<iostream>
int main()
{
int d;

    char char_array[]="Hello\0World";
    char *str="Hello\0World";
    printf("%s %c\n",char_array,char_array[1]);
    printf("%s %c\n",str,str[1]);
    printf("%d %d\n",sizeof(char_array),sizeof(str));
    

cin>>d;

return 0;
}


