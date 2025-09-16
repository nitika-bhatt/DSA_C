#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    scanf("%s", str);

    int lookup[256] = {0};
    lookup['a']=lookup['e']=lookup['i']=lookup['o']=lookup['u']=1;
    lookup['A']=lookup['E']=lookup['I']=lookup['O']=lookup['U']=1;

    int count = 0;
    for (int i = 0; str[i]; i++) {
        if (lookup[(unsigned char)str[i]])
            count++;
    }
    printf("%d\n", count);
    return 0;
}
