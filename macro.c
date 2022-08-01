#include <stdio.h>

int main(void){
    FILE *fp;
    fp = fopen("test.c", "w");
    fprintf(fp, "#include <stdio.h>\n");
    fprintf(fp, "#include <stdlib.h>\n");
    fprintf(fp, "int main(void){\n");
    fprintf(fp, "    \n");
    fprintf(fp, "    return 0;\n");
    fprintf(fp, "}\n");
    fclose(fp);
    
    return 0;
}